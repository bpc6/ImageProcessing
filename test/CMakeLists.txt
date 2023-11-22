include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/b10fad38c4026a29ea6561ab15fc4818170d1c10.zip
)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(main_test)
target_include_directories(main_test PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_sources(main_test PRIVATE
        main_test.cpp
        image_io_test.cpp
)

target_link_libraries(main_test gtest_main ImageProcessingLib)
add_test(NAME main_test COMMAND main_test)
