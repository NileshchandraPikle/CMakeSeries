cmake_minimum_required(VERSION 3.10)

project(HelloApp
        VERSION 1.0
        DESCRIPTION "Hello World Application"
        LANGUAGES CXX)
#GLOBING EXAMPLE
file(GLOB_RECURSE  SOURCES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCES})
#TARGET EXAMPLE
#add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)  
