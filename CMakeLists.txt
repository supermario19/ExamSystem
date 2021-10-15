cmake_minimum_required(VERSION 3.19)
include_directories("/opt/homebrew/opt/mysql@8.0/include/mysql")
include_directories("/opt/homebrew/opt/qt@6/include")
link_directories(/opt/homebrew/opt/mysql@8.0/lib)
link_directories(/opt/homebrew/opt/qt@6/lib)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6Core REQUIRED)
find_package(Qt6Widgets REQUIRED)
find_package(Qt6Quick REQUIRED)


file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} mainwindow.cpp mainwindow.h mainwindow.ui logindialog.ui logindialog.cpp logindialog.h logindialog.ui)
    target_link_libraries(${name} libmysqlclient.dylib)
    target_link_libraries(${name} Qt6::Core)
    target_link_libraries(${name} Qt6::Widgets)
    target_link_libraries(${name} Qt6::Quick)
endforeach()


