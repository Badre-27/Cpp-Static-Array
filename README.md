# Static Array

Build a fixed-size array wrapper class that demonstrates how arrays store elements in contiguous memory with O(1) random access. This foundational data structure teaches memory layout concepts essential for understanding more complex structures.

## Quick Start

**Use the included build scripts:**

### Linux/macOS
```bash
chmod +x run.sh
./run.sh
```

### Windows
```cmd
build.bat
```

The scripts will compile and run your program automatically.

## Prerequisites

You need a C++ compiler installed:

### macOS
```bash
xcode-select --install
```

### Linux (Ubuntu/Debian)
```bash
sudo apt install build-essential
```

### Windows
Install one of:
- [MinGW-w64](https://www.mingw-w64.org/downloads/) - Lightweight g++ for Windows
- [MSYS2](https://www.msys2.org/) - Unix-like environment with g++
- [Visual Studio](https://visualstudio.microsoft.com/) - Full IDE with MSVC compiler

## Step-by-Step Learning

This project guides you through 3 steps, each building on the previous one.

### Switching Steps

Use `start-step.sh` to load starter files for any step:

```bash
# See available steps
./start-step.sh

# Load a specific step
./start-step.sh 01-introduction
```

### Available Steps

| Step | Topic |
|------|-------|
| `01-introduction` | Create the StaticArray class template |
| `02-implementation` | Add element access with operator[] |
| `03-operations` | Implement fill(), find(), front(), back() |

## Manual Build (Without Scripts)

If you prefer to compile manually:

```bash
# Linux/macOS
g++ -std=c++17 -o static_array main.cpp
./static_array

# Windows (with g++)
g++ -std=c++17 -o static_array.exe main.cpp
static_array.exe
```

## What You'll Build

A StaticArray class template that wraps a C-style array with:

- Template parameters for type and size
- O(1) element access with operator[]
- Bounds checking with at() method
- Utility methods: fill(), find(), front(), back()

## Key Concepts

- **Contiguous Memory**: Elements stored adjacent in memory
- **O(1) Random Access**: Any element accessible in constant time
- **Templates**: Generic container for any data type
- **Bounds Checking**: Preventing buffer overflows

## Support

Need help? Send a screenshot and description of your problem to badreotm27@@gmail.com for help.
