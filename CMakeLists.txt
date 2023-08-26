cmake_minimum_required(VERSION 3.20)
project(MyProject)
add_executable(MyProject2 main.cpp "testHeader2.h")

add_subdirectory(../Catch2 Catch2-build)
add_executable(MyProjectTest2 test-main2.cpp  "testHeader2.h")
target_link_libraries(MyProjectTest2 PRIVATE Catch2::Catch2)