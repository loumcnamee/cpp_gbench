cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0135 NEW) # https://cmake.org/cmake/help/latest/policy/CMP0135.html
project(cpp_bench VERSION 0.1.0 LANGUAGES C CXX)


add_subdirectory(aLib)
add_subdirectory(aTest)
add_subdirectory(aApp)
add_subdirectory(aBench)


#add_executable(cpptest cpptest.cpp)

