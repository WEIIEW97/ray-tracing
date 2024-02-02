cmake_minimum_required(VERSION 3.5.1)
project(ray-tracing LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc)
file(GLOB_RECURSE headers ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)

add_executable(
    ${PROJECT_NAME}
    ${headers}
    main.cc
)