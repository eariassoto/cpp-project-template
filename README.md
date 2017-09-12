# C/C++ project template

This is a basic template to create a C/C++ project. Compilation process is handled by [CMake](https://cmake.org/).

## Requirements
+ CMake
+ A C/C++ compiler. I recommend clang or GCC

## How to use this template
1. Put all header files on `include/` folder. Source files go inside `src/`.
2. Go into the `CMakeLists.txt` file and change the project name. Also, include all your source files in this file. 

## How to compile my project
Go into your project root folder and run these commands:
```bash
mkdir build
cd build
cmake ..
make
```
The executable should be on `bin/` folder.
