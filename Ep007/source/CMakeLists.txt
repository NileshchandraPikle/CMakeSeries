cmake_minimum_required(VERSION 3.10)


project(HelloApp
        VERSION 1.0
        DESCRIPTION "HelloWorld Static Library"
        LANGUAGES CXX)

        add_library(operations STATIC src/operations.cpp)
        target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
        target_compile_features(operations PUBLIC cxx_std_20)

        add_library(logger STATIC logger/src/log.cpp)
        target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
        target_compile_features(logger PUBLIC cxx_std_20)
        add_executable(HelloAppBinary main.cpp
                                src/dog.cpp)
        target_compile_features(HelloAppBinary PUBLIC cxx_std_20)        
        target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
        target_link_libraries(HelloAppBinary PRIVATE operations logger) 