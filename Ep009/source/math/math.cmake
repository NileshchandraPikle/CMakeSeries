add_library(libmath STATIC ${CMAKE_CURRENT_SOURCE_DIR}/math/supermath.cpp)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/math/include)