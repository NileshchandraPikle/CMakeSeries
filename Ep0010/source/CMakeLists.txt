cmake_minimum_required(VERSION 3.10)

project(rooster
        VERSION 1.0
        DESCRIPTION "Rooster to demonstrate PRIVATE PUBLIC and INTERFACE linking"
        LANGUAGES CXX)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/math)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/stats)



add_executable(rooster ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(rooster PUBLIC libstats)