project(Curseach LANGUAGES CXX)
cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp
        entities/Train/Train.cpp
        entities/Train/Train.h
        entities/Train/Carriage.cpp
        entities/Train/Carriage.h
        entities/Train/Trip.cpp
        entities/Train/Trip.h
        entities/Train/Ticket.cpp
        entities/Train/Ticket.h
        entities/Account/Loginable.cpp
        entities/Account/Loginable.h
        entities/Account/User.cpp
        entities/Account/User.h
        entities/Account/Admin.cpp
        entities/Account/Admin.h)
