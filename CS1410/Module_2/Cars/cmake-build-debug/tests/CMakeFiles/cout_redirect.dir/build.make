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
CMAKE_SOURCE_DIR = C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug

# Include any dependencies generated for this target.
include tests/CMakeFiles/cout_redirect.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/cout_redirect.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/cout_redirect.dir/flags.make

tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.obj: tests/CMakeFiles/cout_redirect.dir/flags.make
tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.obj: ../tests/cout_redirect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.obj"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cout_redirect.dir\cout_redirect.cpp.obj -c C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\tests\cout_redirect.cpp

tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cout_redirect.dir/cout_redirect.cpp.i"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\tests\cout_redirect.cpp > CMakeFiles\cout_redirect.dir\cout_redirect.cpp.i

tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cout_redirect.dir/cout_redirect.cpp.s"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\tests\cout_redirect.cpp -o CMakeFiles\cout_redirect.dir\cout_redirect.cpp.s

# Object files for target cout_redirect
cout_redirect_OBJECTS = \
"CMakeFiles/cout_redirect.dir/cout_redirect.cpp.obj"

# External object files for target cout_redirect
cout_redirect_EXTERNAL_OBJECTS =

bin/libcout_redirect.dll: tests/CMakeFiles/cout_redirect.dir/cout_redirect.cpp.obj
bin/libcout_redirect.dll: tests/CMakeFiles/cout_redirect.dir/build.make
bin/libcout_redirect.dll: tests/CMakeFiles/cout_redirect.dir/linklibs.rsp
bin/libcout_redirect.dll: tests/CMakeFiles/cout_redirect.dir/objects1.rsp
bin/libcout_redirect.dll: tests/CMakeFiles/cout_redirect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\libcout_redirect.dll"
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cout_redirect.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/cout_redirect.dir/build: bin/libcout_redirect.dll

.PHONY : tests/CMakeFiles/cout_redirect.dir/build

tests/CMakeFiles/cout_redirect.dir/clean:
	cd /d C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests && $(CMAKE_COMMAND) -P CMakeFiles\cout_redirect.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/cout_redirect.dir/clean

tests/CMakeFiles/cout_redirect.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\tests C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests C:\Users\felixr\Desktop\School\CS1410\Module_2\Cars\cmake-build-debug\tests\CMakeFiles\cout_redirect.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/cout_redirect.dir/depend

