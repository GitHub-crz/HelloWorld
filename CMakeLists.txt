cmake_minimum_required(VERSION 3.23)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld
        main.cpp test.cpp test.h
)
add_executable(LeetCodeX
#        LeetCode/LeetCode232.cpp
        LeetCode/LeetCode04.cpp
#        LeetCode/LeedCode123.cpp
        #        LeetCode/LeetCode769.cpp
)
