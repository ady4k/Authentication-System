cmake_minimum_required(VERSION 3.25.0-rc2)

project(AuthenticationSystem)

add_executable(${PROJECT_NAME} src/main.cpp src/menu.cpp src/user.cpp src/admin.cpp src/log.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)