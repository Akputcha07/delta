cmake_minimum_required(VERSION 3.24)
project(delta)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/Dependencies.cmake)

include(FetchContent)
FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2)
FetchContent_MakeAvailable(googletest)

add_subdirectory(apps/delta)

enable_testing()
add_subdirectory(tests)

add_subdirectory(src/itch)
