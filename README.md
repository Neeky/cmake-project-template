## 背景
写一段小而美的代码是容易的地，代码量一大整个项目就容易失控。为了解决这类问题 TDD 就是非常的好实践，于是搞了一个 cmake + gtest 的模板项目，这样后面的项目就可以直接参考这个结构了。

---

## 使用
```
cd cmake-project-template
mkdir build

cd build
cmake .. && cmake --build . && ctest


-- Configuring done (0.1s)
-- Generating done (0.0s)
-- Build files have been written to: /data/repos/cmake-project-template/build
[ 14%] Built target tools
[ 28%] Built target project-template
[ 42%] Built target gtest
[ 57%] Built target gtest_main
[ 71%] Built target MathTest
[ 85%] Built target gmock
[100%] Built target gmock_main
Test project /data/repos/cmake-project-template/build
    Start 1: MathTest.BasicAssertions
1/1 Test #1: MathTest.BasicAssertions .........   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.00 sec
```
---
