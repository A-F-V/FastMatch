
add_executable(${PROJECT_NAME}_BENCH naive.cpp)

set(CMAKE_BUILD_TYPE Release)

find_package(benchmark CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME}_BENCH PRIVATE benchmark::benchmark benchmark::benchmark_main)

target_link_libraries(${PROJECT_NAME}_BENCH PRIVATE ${PROJECT_NAME})

target_compile_options(${PROJECT_NAME}_BENCH PRIVATE -Wall -Wextra -Wpedantic)
