#require at least cmake 2.8
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0 FATAL_ERROR)
cmake_policy(VERSION 2.8)
#name of project
PROJECT(Lecture5)
#make sure we only build release
SET(CMAKE_CONFIGURATION_TYPES Debug Release CACHE STRING "" FORCE)

#include and source dirs
SET(SOURCE_DIR "source")
SET(INCLUDE_DIR "include")

#go into directories and get files
FILE(GLOB SOURCE_FILES ${SOURCE_DIR}/*.cpp)
FILE(GLOB HEADER_FILES ${INCLUDE_DIR}/*.h)

#make sure we include the path to the include directory
INCLUDE_DIRECTORIES(${INCLUDE_DIR})
#create exe called Lecture5
ADD_EXECUTABLE(Lecture5 ${SOURCE_FILES} ${HEADER_FILES})