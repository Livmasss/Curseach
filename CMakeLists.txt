cmake_minimum_required(VERSION 3.24)
project(Curseach)

set(CMAKE_CXX_STANDARD 17)

add_executable(Curseach main.cpp
        classes/Train/Train.cpp
        classes/Train/Train.h
        classes/Train/Carriage.cpp
        classes/Train/Carriage.h
        classes/Train/Trip.cpp
        classes/Train/Trip.h
        classes/Train/Ticket.cpp
        classes/Train/Ticket.h
        classes/Account/Loginable.cpp
        classes/Account/Loginable.h
        classes/Account/User.cpp
        classes/Account/User.h
        classes/Account/Admin.cpp
        classes/Account/Admin.h)

add_library(myLogicalExtLib SHARED IMPORTED)
set_target_properties(myLogicalExtLib PROPERTIES IMPORTED_LOCATION "")