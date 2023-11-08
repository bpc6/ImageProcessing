cmake_minimum_required(VERSION 3.26)
project(ImageProcessing)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# library
add_library(ImageProcessingLib STATIC)
target_include_directories(ImageProcessingLib PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

# main executable
add_executable(ImageProcessing src/main.cpp)
target_link_libraries(ImageProcessing ImageProcessingLib)

# Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/b10fad38c4026a29ea6561ab15fc4818170d1c10.zip
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_subdirectory(test)
