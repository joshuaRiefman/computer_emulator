cmake_minimum_required(VERSION 3.24)
project(computer_emulator)

set(CMAKE_CXX_STANDARD 20)

set(source ${source}
        src/Computer.cpp
        src/Clock.cpp
        src/Component.cpp
        src/components/CPU.cpp)
set(include ${include}
        include/Computer.h
        include/Clock.h
        include/Component.h
        include/components/CPU.h)

add_executable(computer_emulator src/main.cpp ${source} ${include})
