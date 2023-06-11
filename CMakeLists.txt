cmake_minimum_required(VERSION 3.21.0)

project(project-template)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 增加 src/*.cpp 这类型的文件到 src_files
aux_source_directory(src src_files)

# 增加 tools 这个库
add_subdirectory(src/tools)

# 指定目标和链接的依赖
add_executable(project-template ${src_files})
target_link_libraries(project-template tools)

# 增加测试
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# include(tests/CMakeLists.txt)
add_executable(
  hello_test
  tests/hello_test.cpp
)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)
