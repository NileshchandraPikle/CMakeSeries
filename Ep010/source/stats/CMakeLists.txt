add_library(libstats STATIC ${CMAKE_CURRENT_SOURCE_DIR}/stats.cpp)
target_include_directories(libstats PUBLIC ${CMAKE_CURRENT_DIR}/include)
target_link_libraries(libstats PUBLIC libmath)