$JAVAC="$env:JAVA_HOME/bin/javac"

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

# BUILD METHODS
function Generate() {
    $cwd = GetFullPath "."
    $src = GetJavaSourceString
    
    Write-Host "Generating header files"
    
    try {
        Set-Location "src/java"
        Invoke-Expression "javac -h ../cpp $src"                
        Set-Location $cwd
    } catch {
        Write-Host $_
        Exit 1
    }
    
    #javac -h ../cpp/ `find . -type f -name '*.java'`
    #rm `find . -type f -name '*.class'`
}

function Cleanup() {
    $cwd = GetFullPath "."
    $files = GetFilesFromFolder "src/java" "*.class"
    
    Write-Host "Cleanup"
    
    foreach ($file in $files) {
        Remove-Item -Path $file -Force
    }
}

# EXECUTE
Generate
Cleanup
