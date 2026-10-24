cmake_minimum_required(VERSION 3.25)

project(vns
        VERSION 0.0.0
        DESCRIPTION "Visual Novel Studio – Multi-platform visual novel game engine."
        HOMEPAGE_URL "https://github.com/Duchees/visual-novel-studio"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
        src/main.cpp 
        src/platform/window.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3)
