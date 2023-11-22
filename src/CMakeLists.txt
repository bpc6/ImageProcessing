target_sources(ImageProcessingLib PRIVATE
        image_io.cpp
)
add_executable(ImageProcessing main.cpp)
target_link_libraries(ImageProcessing ImageProcessingLib)
