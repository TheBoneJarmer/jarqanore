$JAVAC="$env:JAVA_HOME/bin/javac"
$JAR="$env:JAVA_HOME/bin/jar"
$JAVADOC="$env:JAVA_HOME/bin/javadoc"

# HELPER METHODS
function GetFullPath([string] $path) {
    return [System.IO.Path]::GetFullPath($path)
}

function GetFilesFromFolder([string] $path, [string] $pattern) {
    return [System.IO.Directory]::GetFiles($path, $pattern, [System.IO.SearchOption]::AllDirectories)
}

function GetJavaSourceString() {
    $files = GetFilesFromFolder "src/java" "*.java"
    $result = ""
    
    foreach ($file in $files) {
        $file = $file.replace("src/java/", "")
        $result += "$file "
    }
    
    return $result
}

function RemoveFolderIfExists([string] $path) {
    if (Test-Path -Path $path) {
        Remove-Item -Path $path -Recurse -Force > $null
    }
}

function CreateFolder([string] $name) {
    New-Item -Path . -Name $name -ItemType "directory" > $null
}

# BUILD METHODS
function InitBuild() {
    RemoveFolderIfExists "out"
    RemoveFolderIfExists "src/cpp/build"
    
    CreateFolder "out"
    CreateFolder "out/lib"
    CreateFolder "src/cpp/build"
}

function InitCmake() {
    $out = GetFullPath "out"
    $cwd = GetFullPath "."

    Write-Host "Generating cmake files"

    try {
        Set-Location "src/cpp/build"
        
        if ($IsWindows) {
            Invoke-Expression 'cmake -S .. -G "MinGW Makefiles" > $null'
        }
        
        if ($IsLinux) {
            Invoke-Expression 'cmake -S .. -G "Unix Makefiles" > $null'
        }
        
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
}

function BuildNative() {
    $out = GetFullPath "out/lib"
    $cwd = GetFullPath "."
    
    Write-Host "Building native library"
    
    try {
        Set-Location "src/cpp/build"
        Invoke-Expression 'cmake --build . > $null'
        
        if ($IsWindows) {
            Copy-Item -Path *.dll -Destination $out > $null
        }
        
        if ($IsLinux) {
            Copy-Item -Path *.so -Destination $out > $null
        }
        
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
}

function BuildLibrary() {
    $out = GetFullPath "out"
    $cwd = GetFullPath "."
    $src = GetJavaSourceString
            
    Write-Host "Building java library"
    
    try {
        Set-Location "src/java"
        Invoke-Expression "$JAVAC -d $out -g $src > '$null'"
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
}

function BuildDocs() {
    $out = GetFullPath "out/doc"
    $cwd = GetFullPath "."
    $src = GetJavaSourceString
            
    Write-Host "Building java docs"
    
    try {
        Set-Location "src/java"
        Invoke-Expression "$JAVADOC -d $out $src 2> '$null'"
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
}

function BuildJar() {
    $out = GetFullPath "out"
    $cwd = GetFullPath "."
    
    Write-Host "Building jar"
    
    if (Test-Path "lib") {
        if ($IsWindows) {
            Copy-Item -Path "lib/*.dll" -Destination $out > $null
        }
        
        if ($IsLinux) {        
           Copy-Item -Path "lib/*.so" -Destination $out > $null
        }
    }
    
    try {
        Set-Location $out
        Invoke-Expression "$JAR -cf jarqanore.jar ./be/ ./lib/"
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
}

function Cleanup() {
    $out = GetFullPath "out"
    $cwd = GetFullPath "."
    
    Write-Host "Cleanup"
    
    RemoveFolderIfExists "$out/lib"
    RemoveFolderIfExists "$out/be"
}

# EXECUTION
InitBuild
InitCmake
BuildNative
BuildLibrary
BuildDocs
BuildJar
Cleanup
