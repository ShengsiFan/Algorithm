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
CMAKE_SOURCE_DIR = D:\Algorithm\0844BackspaceCompare

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\0844BackspaceCompare\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0844BackspaceCompare.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0844BackspaceCompare.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0844BackspaceCompare.dir/flags.make

CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.obj: CMakeFiles/0844BackspaceCompare.dir/flags.make
CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.obj: ../BackspaceCompare.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\0844BackspaceCompare\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0844BackspaceCompare.dir\BackspaceCompare.cpp.obj -c D:\Algorithm\0844BackspaceCompare\BackspaceCompare.cpp

CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\0844BackspaceCompare\BackspaceCompare.cpp > CMakeFiles\0844BackspaceCompare.dir\BackspaceCompare.cpp.i

CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\0844BackspaceCompare\BackspaceCompare.cpp -o CMakeFiles\0844BackspaceCompare.dir\BackspaceCompare.cpp.s

# Object files for target 0844BackspaceCompare
0844BackspaceCompare_OBJECTS = \
"CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.obj"

# External object files for target 0844BackspaceCompare
0844BackspaceCompare_EXTERNAL_OBJECTS =

0844BackspaceCompare.exe: CMakeFiles/0844BackspaceCompare.dir/BackspaceCompare.cpp.obj
0844BackspaceCompare.exe: CMakeFiles/0844BackspaceCompare.dir/build.make
0844BackspaceCompare.exe: CMakeFiles/0844BackspaceCompare.dir/linklibs.rsp
0844BackspaceCompare.exe: CMakeFiles/0844BackspaceCompare.dir/objects1.rsp
0844BackspaceCompare.exe: CMakeFiles/0844BackspaceCompare.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\0844BackspaceCompare\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0844BackspaceCompare.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0844BackspaceCompare.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0844BackspaceCompare.dir/build: 0844BackspaceCompare.exe

.PHONY : CMakeFiles/0844BackspaceCompare.dir/build

CMakeFiles/0844BackspaceCompare.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0844BackspaceCompare.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0844BackspaceCompare.dir/clean

CMakeFiles/0844BackspaceCompare.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\0844BackspaceCompare D:\Algorithm\0844BackspaceCompare D:\Algorithm\0844BackspaceCompare\cmake-build-debug D:\Algorithm\0844BackspaceCompare\cmake-build-debug D:\Algorithm\0844BackspaceCompare\cmake-build-debug\CMakeFiles\0844BackspaceCompare.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0844BackspaceCompare.dir/depend

