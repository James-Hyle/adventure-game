cmake_minimum_required(VERSION 3.10.0)
project(Adventure VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB ADVENTURE_SOURCES "src/*.cpp")

add_executable(Adventure)

target_sources(Adventure PRIVATE ${ADVENTURE_SOURCES})
