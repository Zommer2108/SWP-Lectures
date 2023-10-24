cmake_minimum_required(VERSION 3.26)
project(SWP_Lectures)

set(CMAKE_CXX_STANDARD 14)

include_directories(W5_CPP_Basics)

add_executable(SWP_Lectures
        W5_CPP_Basics/classexamples.cpp
        W5_CPP_Basics/classexamples.h
        W5_CPP_Basics/IOStreams.cpp
        W5_CPP_Basics/IOStreams.h)
