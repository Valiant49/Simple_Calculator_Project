cmake_minimum_required(VERSION 3.10)
project(SimpleCalculator)

set(CMAKE_CXX_STANDARD 17)

find_package(ftxui REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main
    ftxui::screen
    ftxui::dom
    ftxui::component
)