add_executable(delta_tests smoke_test.cpp)
target_link_libraries(delta_tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(delta_tests)