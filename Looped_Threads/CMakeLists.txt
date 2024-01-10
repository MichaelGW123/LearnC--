cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)

project(mainrun)

add_library(THREAD_LIB
  Thread.h
  Thread.cpp
)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)
enable_testing()

add_executable(mainrun main.cpp)
target_link_libraries(mainrun THREAD_LIB)