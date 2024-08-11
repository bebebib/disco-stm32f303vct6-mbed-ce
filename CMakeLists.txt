cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

# Initialize Mbed OS build system. 
# Note: This block must be before the include of app.cmake
set(MBED_APP_JSON_PATH mbed_app.json5)

include(mbed-os/tools/cmake/app.cmake)
add_subdirectory(mbed-os)

project(MyMbedApp)

# add subdirectories and build targets here

mbed_finalize_build()

# My project

add_executable(MyProgram main.cpp)
target_link_libraries(MyProgram mbed-os) # Can also link to mbed-baremetal here
mbed_set_post_build(MyProgram)