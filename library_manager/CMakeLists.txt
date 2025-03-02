cmake_minimum_required(VERSION 3.10)
project(SmartLibraryManager)

set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INC_DIR ${CMAKE_SOURCE_DIR}/inc)

set(SOURCES
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/Items.cpp
    ${SRC_DIR}/Books.cpp
    ${SRC_DIR}/Library.cpp
    ${SRC_DIR}/student.cpp
    ${SRC_DIR}/User.cpp
)

set(HEADERS
    ${INC_DIR}/Items.hpp
    ${INC_DIR}/Books.hpp
    ${INC_DIR}/Library.hpp
    ${INC_DIR}/Student.hpp
    ${INC_DIR}/User.hpp
)

add_executable(SmartLibraryManager ${SOURCES} ${HEADERS})

target_include_directories(SmartLibraryManager PRIVATE ${INC_DIR})

target_compile_options(SmartLibraryManager PRIVATE -Wall -Wextra -Wpedantic)
