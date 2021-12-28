cmake_minimum_required(VERSION 3.8)
project(gb_objects VERSION 0.1.2.1)

file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/*.cpp")
set(GB_SOURCES_DIR "${PROJECT_SOURCE_DIR}/../")
set(SFML_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/../../lib/SFML/include/")

include_directories(${GB_SOURCES_DIR}
                    ${SFML_INCLUDE_DIR})

add_library(${PROJECT_NAME} STATIC ${SOURCES})