set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

set(TARGET_NAME call_teams)      # program name
set(LIB_NAME mylib)      # lib name

# Create a Shared Library
add_library(${LIB_NAME}
    SHARED
        dodgers.h
        dodgers.cpp
        yankees.h
        yankees.cpp
        )

add_executable(${TARGET_NAME} call_teams.cpp)
target_link_libraries(${TARGET_NAME} ${LIB_NAME}) # Link Library

add_executable(function_overload function_overload.cpp)
add_executable(arguments arguments.cpp)
add_executable(ret_values ret_values.cpp)
add_executable(functions_part1 functions_part1.cpp)
add_executable(local_global local_global.cpp)