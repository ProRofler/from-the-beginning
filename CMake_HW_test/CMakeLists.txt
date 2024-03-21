cmake_minimum_required(VERSION 3.28)

project(HelloWorld)

set(HEADERS
    version.h)

set(SOURCES
    main.cpp
    version.cpp)

add_executable(cmakeBuild ${HEADERS} ${SOURCES})

set_target_properties(cmakeBuild PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON) 