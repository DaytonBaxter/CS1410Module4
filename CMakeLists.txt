cmake_minimum_required(VERSION 3.8)
project(Module4)

set(CMAKE_CXX_STANDARD 11)


#set(SOURCE_FILES firstClass.cpp)
#set(SOURCE_FILES distanceClass.cpp)
#set(SOURCE_FILES counter.cpp)
#set(SOURCE_FILES Dayton_Baxter_hw2_Task1.cpp)
set(SOURCE_FILES distClassArgument.cpp)


add_executable(Module4 ${SOURCE_FILES})