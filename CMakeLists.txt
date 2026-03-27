cmake_minimum_required(VERSION 3.20)
project(QtAutoUpdaterDemo VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Network)
qt_standard_project_setup()

add_definitions(-DAPP_VERSION="${PROJECT_VERSION}")
add_subdirectory(3rdparty/QSimpleUpdater)
add_subdirectory(src)