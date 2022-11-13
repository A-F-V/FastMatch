file(GLOB SRC_FILES *.cpp)

message(STATUS "SRC_FILES: ${SRC_FILES}")

add_library(${PROJECT_NAME} ${SRC_FILES})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
