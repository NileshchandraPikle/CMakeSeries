add_library(libmath STATIC ${CMAKE_CURRENT_SOURCE_DIR}/supermath.cpp)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)