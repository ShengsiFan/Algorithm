# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Softwares\CLion\CLion 2023.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Softwares\CLion\CLion 2023.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Algorithm\0198Rob

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\0198Rob\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0198Rob.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/0198Rob.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/0198Rob.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0198Rob.dir/flags.make

CMakeFiles/0198Rob.dir/main.cpp.obj: CMakeFiles/0198Rob.dir/flags.make
CMakeFiles/0198Rob.dir/main.cpp.obj: D:/Algorithm/0198Rob/main.cpp
CMakeFiles/0198Rob.dir/main.cpp.obj: CMakeFiles/0198Rob.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\0198Rob\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0198Rob.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/0198Rob.dir/main.cpp.obj -MF CMakeFiles\0198Rob.dir\main.cpp.obj.d -o CMakeFiles\0198Rob.dir\main.cpp.obj -c D:\Algorithm\0198Rob\main.cpp

CMakeFiles/0198Rob.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0198Rob.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\0198Rob\main.cpp > CMakeFiles\0198Rob.dir\main.cpp.i

CMakeFiles/0198Rob.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0198Rob.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\0198Rob\main.cpp -o CMakeFiles\0198Rob.dir\main.cpp.s

# Object files for target 0198Rob
0198Rob_OBJECTS = \
"CMakeFiles/0198Rob.dir/main.cpp.obj"

# External object files for target 0198Rob
0198Rob_EXTERNAL_OBJECTS =

0198Rob.exe: CMakeFiles/0198Rob.dir/main.cpp.obj
0198Rob.exe: CMakeFiles/0198Rob.dir/build.make
0198Rob.exe: CMakeFiles/0198Rob.dir/linkLibs.rsp
0198Rob.exe: CMakeFiles/0198Rob.dir/objects1
0198Rob.exe: CMakeFiles/0198Rob.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\0198Rob\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0198Rob.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0198Rob.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0198Rob.dir/build: 0198Rob.exe
.PHONY : CMakeFiles/0198Rob.dir/build

CMakeFiles/0198Rob.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0198Rob.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0198Rob.dir/clean

CMakeFiles/0198Rob.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\0198Rob D:\Algorithm\0198Rob D:\Algorithm\0198Rob\cmake-build-debug D:\Algorithm\0198Rob\cmake-build-debug D:\Algorithm\0198Rob\cmake-build-debug\CMakeFiles\0198Rob.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0198Rob.dir/depend

