cmake_minimum_required(VERSION 3.15)
project(test_package LANGUAGES CXX)

find_package(metal-cpp REQUIRED)

add_executable(${PROJECT_NAME} test_package.cpp)
target_link_libraries(${PROJECT_NAME}  PRIVATE  metal-cpp::metal-cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
