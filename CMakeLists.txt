cmake_minimum_required (VERSION 3.15)

project(use-nana)

find_package(unofficial-nana CONFIG REQUIRED)

add_executable (main main.cpp)
target_link_libraries(main PRIVATE unofficial::nana::nana)

add_executable (main2 main2.cpp)
target_link_libraries(main2 PRIVATE unofficial::nana::nana)
