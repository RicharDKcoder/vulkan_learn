cmake_minimum_required(VERSION 3.31)
project(vulkan_learn)

include_directories("src/engine/include")

add_subdirectory("src/engine")
add_subdirectory("src/game")

include(CTest)
enable_testing()