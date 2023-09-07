cmake_minimum_required(VERSION 3.10)

project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    myclass.cpp
    main.cpp # You can create this file with your main function
)

# Add executable target
add_executable(MyApp ${SOURCES})

# Include directories
target_include_directories(MyApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# You can add additional configuration here, like linking libraries if needed
