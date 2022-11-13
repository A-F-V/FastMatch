
add_executable(${PROJECT_NAME} main.cpp)

find_package(benchmark CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE benchmark::benchmark benchmark::benchmark_main)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
