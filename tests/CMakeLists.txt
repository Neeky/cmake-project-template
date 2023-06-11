add_executable(
  hello_test
  tests/hello_test.cpp
)
target_link_libraries(
  hello_test
  GTest::gtest_main
  tools # 注意这里要测试的是 tools 所以也要把 tools 加进来不然报报找不到头文件
)

include(GoogleTest)
gtest_discover_tests(hello_test)