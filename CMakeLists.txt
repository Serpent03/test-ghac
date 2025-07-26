cmake_minimum_required(VERSION 3.26)
project(example)

find_package(pybind11 REQUIRED) # Find Pybind11 configuration
pybind11_add_module(example example.cpp) # Create the Python extension module

install(TARGETS example LIBRARY DESTINATION example)