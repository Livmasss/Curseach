project(Curseach LANGUAGES CXX)
cmake_minimum_required(VERSION 3.24)

cmake_policy(SET CMP0003 NEW)

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
        entities/Ticket.cpp
        entities/Ticket.h
        entities/Account/Loginable.cpp
        entities/Account/Loginable.h
        entities/Account/User.cpp
        entities/Account/User.h
        entities/Account/Admin.cpp
        entities/Account/Admin.h
        entities/CommandHandler.cpp
        entities/CommandHandler.h
        entities/LifeCircle.cpp
        entities/LifeCircle.h)

find_package(libpqxx CONFIG REQUIRED)
target_link_libraries(main PRIVATE libpqxx::pqxx)