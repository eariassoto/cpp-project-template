# C/C++ project template

This is a basic template to create a C/C++ project. Compilation process is handled by [CMake](https://cmake.org/). Unit tests are provided by the [Google Test](https://github.com/google/googletest) framework. The Google Test libraries will be downloaded and built by CMake. Code coverage analysis is provided by `gcov` and `lcov`.

## Requirements
+ CMake
+ A C/C++ compiler. I have only tried the code coverage with `GCC`, I am not sure if it will work with `clang`.

## How to use this template
1. Put all header files on `include/` folder. Source files go inside `src/`.
2. Go into the `CMakeLists.txt` file and change the project name. Include all your source files in this file.
3. For the `CMakeLists.txt` inside the `tests` folder, include the unit tests source files and the project source files as well.

## How to compile my project
Go into your project root folder and run these commands:
```bash
mkdir build
cd build
cmake ..
make
```

The executable for the program and the unit tests will be in the `bin/` folder.

## How to compile my project with code coverage
Go into your project root folder and run these commands:
```bash
cd build
cmake -DCMAKE_BUILD_TYPE=Coverage ..
make
make coverage
```

The executable for the program and the unit tests will be in the `bin/` folder. Code coverage information will be in the `build/coverage` folder. Use a web browser to open the `index.html` file.
