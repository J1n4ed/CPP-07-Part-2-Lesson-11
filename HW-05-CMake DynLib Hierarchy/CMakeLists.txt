cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(CMakeDynLibHierarchy)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(
        "${PROJECT_SOURCE_DIR}/HierarchyLib/src"
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/HierarchyLib/src/*.h"
        "${PROJECT_SOURCE_DIR}/HierarchyLib/src/*.cpp"
        )

add_library(HierarchyLib SHARED ${all_SRCS})

add_executable(HierarchyApp "${PROJECT_SOURCE_DIR}/HierarchyApp/main.cpp")
target_link_libraries(HierarchyApp HierarchyLib)