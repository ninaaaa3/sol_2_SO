cmake_minimum_required(VERSION 3.10)
project(RandomImageGenerator)

find_package(OpenCV REQUIRED)
if (NOT OpenCV_FOUND)
    message(FATAL_ERROR "OpenCV not found. Please set OpenCV_DIR.")
endif()

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(random_image_generator src/main.cpp src/generator.cpp)
target_link_libraries(random_image_generator ${OpenCV_LIBS})
