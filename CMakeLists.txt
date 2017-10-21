cmake_minimum_required (VERSION 2.8)

# Change project name
set (PROJECT_NAME cpp-project-template)
project (${PROJECT_NAME} C CXX)

# Source files folder
set (SRC_DIR src)

# Header files folder
set (INCL_DIR include)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")

include_directories (${PROJECT_SOURCE_DIR}/${INCL_DIR})

# Important: Include all source files on this list
set (SOURCE
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/greeter.cpp
)

# Output folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable (${PROJECT_NAME} ${SOURCE})

# Unit tests
add_subdirectory(tests)
