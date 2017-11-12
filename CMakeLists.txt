cmake_minimum_required (VERSION 2.8.11)

# Change project name
set (PROJECT_NAME cpp-project-template)
set (PROJECT_TEST_NAME ${PROJECT_NAME}-ut)

project (${PROJECT_NAME} C CXX)

# Folder where the Coverage module is
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMakeModules)

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
    ${SRC_DIR}/person.cpp
)

# Output folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

# Add the executable for the program
add_executable (${PROJECT_NAME} ${SOURCE})

# Unit tests
add_subdirectory(tests)

# Code coverage
if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
    include(CodeCoverage)
    set(COVERAGE_EXCLUDES
		'/usr/*'
		'${PROJECT_SOURCE_DIR}/tests/*'
		'${CMAKE_BINARY_DIR}/googletest-src/googletest/include/gtest/*'
		'${CMAKE_BINARY_DIR}/googletest-src/googletest/src/*'
		'${CMAKE_BINARY_DIR}/googletest-src/googlemock/include/gmock/*'
		'${CMAKE_BINARY_DIR}/googletest-src/googlemock/src/*'
    )
    SETUP_TARGET_FOR_COVERAGE(
		NAME coverage
		EXECUTABLE ${PROJECT_TEST_NAME}
		DEPENDENCIES ${PROJECT_NAME}
    )
	set_target_properties(${PROJECT_NAME}
        PROPERTIES
        COMPILE_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage"
    )
endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"
