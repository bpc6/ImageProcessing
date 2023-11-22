cmake_minimum_required(VERSION 3.26)
project(ImageProcessing)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/build)
find_package(OpenCV REQUIRED)

# library
add_library(ImageProcessingLib STATIC)
target_include_directories(ImageProcessingLib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(ImageProcessingLib PRIVATE ${OpenCV_LIBS})

add_subdirectory(src)
add_subdirectory(test)
