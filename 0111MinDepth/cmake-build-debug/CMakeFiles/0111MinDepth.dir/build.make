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
CMAKE_COMMAND = "E:\Softwares\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Softwares\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Algorithm\0111MinDepth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\0111MinDepth\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0111MinDepth.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0111MinDepth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0111MinDepth.dir/flags.make

CMakeFiles/0111MinDepth.dir/main2.cpp.obj: CMakeFiles/0111MinDepth.dir/flags.make
CMakeFiles/0111MinDepth.dir/main2.cpp.obj: ../main2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\0111MinDepth\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0111MinDepth.dir/main2.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0111MinDepth.dir\main2.cpp.obj -c D:\Algorithm\0111MinDepth\main2.cpp

CMakeFiles/0111MinDepth.dir/main2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0111MinDepth.dir/main2.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\0111MinDepth\main2.cpp > CMakeFiles\0111MinDepth.dir\main2.cpp.i

CMakeFiles/0111MinDepth.dir/main2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0111MinDepth.dir/main2.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\0111MinDepth\main2.cpp -o CMakeFiles\0111MinDepth.dir\main2.cpp.s

# Object files for target 0111MinDepth
0111MinDepth_OBJECTS = \
"CMakeFiles/0111MinDepth.dir/main2.cpp.obj"

# External object files for target 0111MinDepth
0111MinDepth_EXTERNAL_OBJECTS =

0111MinDepth.exe: CMakeFiles/0111MinDepth.dir/main2.cpp.obj
0111MinDepth.exe: CMakeFiles/0111MinDepth.dir/build.make
0111MinDepth.exe: CMakeFiles/0111MinDepth.dir/linklibs.rsp
0111MinDepth.exe: CMakeFiles/0111MinDepth.dir/objects1.rsp
0111MinDepth.exe: CMakeFiles/0111MinDepth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\0111MinDepth\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0111MinDepth.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0111MinDepth.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0111MinDepth.dir/build: 0111MinDepth.exe

.PHONY : CMakeFiles/0111MinDepth.dir/build

CMakeFiles/0111MinDepth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0111MinDepth.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0111MinDepth.dir/clean

CMakeFiles/0111MinDepth.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\0111MinDepth D:\Algorithm\0111MinDepth D:\Algorithm\0111MinDepth\cmake-build-debug D:\Algorithm\0111MinDepth\cmake-build-debug D:\Algorithm\0111MinDepth\cmake-build-debug\CMakeFiles\0111MinDepth.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0111MinDepth.dir/depend

