cmake_minimum_required(VERSION 3.9)
project(Star_cube)

set(CMAKE_CXX_STANDARD 11)

add_executable(Star_cube
        Functions.cpp
        Functions.h
        logger.h
        Readme.txt
        main.cpp
        main.h

        )


cmake_minimum_required(VERSION 2.8.4)

project(BoostTest)

message(STATUS "start running cmake...")

find_package(Boost 1.57.0 COMPONENTS system filesystem REQUIRED)

if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})

endif()

add_executable(BoostTest main.cpp)

if(Boost_FOUND)

    target_link_libraries(BoostTest ${Boost_LIBRARIES})

endif()
