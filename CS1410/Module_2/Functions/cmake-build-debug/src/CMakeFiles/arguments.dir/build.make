# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/arguments.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/arguments.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/arguments.dir/flags.make

src/CMakeFiles/arguments.dir/arguments.cpp.obj: src/CMakeFiles/arguments.dir/flags.make
src/CMakeFiles/arguments.dir/arguments.cpp.obj: ../src/arguments.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/arguments.dir/arguments.cpp.obj"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\arguments.dir\arguments.cpp.obj -c C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\src\arguments.cpp

src/CMakeFiles/arguments.dir/arguments.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arguments.dir/arguments.cpp.i"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\src\arguments.cpp > CMakeFiles\arguments.dir\arguments.cpp.i

src/CMakeFiles/arguments.dir/arguments.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arguments.dir/arguments.cpp.s"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\src\arguments.cpp -o CMakeFiles\arguments.dir\arguments.cpp.s

# Object files for target arguments
arguments_OBJECTS = \
"CMakeFiles/arguments.dir/arguments.cpp.obj"

# External object files for target arguments
arguments_EXTERNAL_OBJECTS =

bin/arguments.exe: src/CMakeFiles/arguments.dir/arguments.cpp.obj
bin/arguments.exe: src/CMakeFiles/arguments.dir/build.make
bin/arguments.exe: src/CMakeFiles/arguments.dir/linklibs.rsp
bin/arguments.exe: src/CMakeFiles/arguments.dir/objects1.rsp
bin/arguments.exe: src/CMakeFiles/arguments.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\bin\arguments.exe"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arguments.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/arguments.dir/build: bin/arguments.exe

.PHONY : src/CMakeFiles/arguments.dir/build

src/CMakeFiles/arguments.dir/clean:
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src && $(CMAKE_COMMAND) -P CMakeFiles\arguments.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/arguments.dir/clean

src/CMakeFiles/arguments.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\src C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src C:\Users\felixr\Desktop\School\CS1410\Module_2\Functions\cmake-build-debug\src\CMakeFiles\arguments.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/arguments.dir/depend

