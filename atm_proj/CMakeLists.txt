cmake_minimum_required(VERSION 3.10)

# Project name
project(ATM_Project)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define source and include directories
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INC_DIR "${CMAKE_SOURCE_DIR}/inc")
set(BIN_DIR "${CMAKE_SOURCE_DIR}/bin")

# Collect all source files
file(GLOB SRC_FILES "${SRC_DIR}/*.cpp")

# Create executable
add_executable(atm ${SRC_FILES})

# Include directories
target_include_directories(atm PRIVATE ${INC_DIR})

# Set binary output directory
set_target_properties(atm PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
)

# Optional: Enable more warnings
target_compile_options(atm PRIVATE -Wall -Wextra -Wpedantic)
