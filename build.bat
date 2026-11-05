@echo off
REM Build and run script for Windows
REM
REM This script compiles your C++ program using g++ and runs it.
REM Usage: build.bat

setlocal enabledelayedexpansion

REM Navigate to the script's directory (project root when downloaded)
cd /d "%~dp0"

echo === Static Array ===
echo.

REM Check for g++ compiler
where g++ >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] g++ compiler not found
    echo.
    echo Install MinGW-w64:
    echo   1. Download from: https://www.mingw-w64.org/downloads/
    echo   2. Or use MSYS2: https://www.msys2.org/
    echo   3. Add g++ to your PATH
    echo.
    exit /b 1
)

echo [OK] g++ compiler found
echo.

REM Compile the program
echo Compiling main.cpp...
g++ -std=c++17 -Wall -o static_array.exe main.cpp
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo [ERROR] Compilation failed
    exit /b 1
)

echo.
echo === Build Complete! ===
echo.
echo Running: static_array.exe
echo ---
echo.

REM Run the program
static_array.exe %*
