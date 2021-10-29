cmake_minimum_required(VERSION 3.19)
project(daily_coding_challenge)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)

FetchContent_MakeAvailable(googletest)

add_library(
    problems
    STATIC
    support/Problem.cpp
    problems/Problems.cpp
    problems/Day144.cpp
)

add_executable(
    daily_coding_challenge
    ${PROJECT_SOURCE_DIR}/main.cpp
)

add_executable(
    tests
    ${PROJECT_SOURCE_DIR}/tests/Tests.cpp
)

target_link_libraries(
  daily_coding_challenge
  PUBLIC
  problems
)

target_link_libraries(
  tests
  PUBLIC
  problems
  gtest_main
)

enable_testing()

include(GoogleTest)
gtest_discover_tests(tests)
