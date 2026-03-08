cmake_minimum_required(VERSION 3.10)

project(MyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_app src/main.cpp)

if(APP_VERSION)
    target_compile_definitions(my_app PRIVATE APP_VERSION="${APP_VERSION}")
endif()

if(GIT_HASH)
    target_compile_definitions(my_app PRIVATE GIT_HASH="${GIT_HASH}")
endif()

if(BUILD_OS)
    target_compile_definitions(my_app PRIVATE BUILD_OS="${BUILD_OS}")
endif()
