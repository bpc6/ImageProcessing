add_executable(main_test)
target_include_directories(main_test PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_sources(main_test PRIVATE
        main_test.cpp
        image_io_test.cpp
)

target_link_libraries(main_test gtest_main ImageProcessingLib)
add_test(NAME main_test COMMAND main_test)
