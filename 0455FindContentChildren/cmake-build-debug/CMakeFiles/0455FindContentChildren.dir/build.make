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
CMAKE_SOURCE_DIR = D:\Algorithm\0455FindContentChildren

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\0455FindContentChildren\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0455FindContentChildren.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0455FindContentChildren.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0455FindContentChildren.dir/flags.make

CMakeFiles/0455FindContentChildren.dir/main.cpp.obj: CMakeFiles/0455FindContentChildren.dir/flags.make
CMakeFiles/0455FindContentChildren.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\0455FindContentChildren\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0455FindContentChildren.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0455FindContentChildren.dir\main.cpp.obj -c D:\Algorithm\0455FindContentChildren\main.cpp

CMakeFiles/0455FindContentChildren.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0455FindContentChildren.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\0455FindContentChildren\main.cpp > CMakeFiles\0455FindContentChildren.dir\main.cpp.i

CMakeFiles/0455FindContentChildren.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0455FindContentChildren.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\0455FindContentChildren\main.cpp -o CMakeFiles\0455FindContentChildren.dir\main.cpp.s

# Object files for target 0455FindContentChildren
0455FindContentChildren_OBJECTS = \
"CMakeFiles/0455FindContentChildren.dir/main.cpp.obj"

# External object files for target 0455FindContentChildren
0455FindContentChildren_EXTERNAL_OBJECTS =

0455FindContentChildren.exe: CMakeFiles/0455FindContentChildren.dir/main.cpp.obj
0455FindContentChildren.exe: CMakeFiles/0455FindContentChildren.dir/build.make
0455FindContentChildren.exe: CMakeFiles/0455FindContentChildren.dir/linklibs.rsp
0455FindContentChildren.exe: CMakeFiles/0455FindContentChildren.dir/objects1.rsp
0455FindContentChildren.exe: CMakeFiles/0455FindContentChildren.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\0455FindContentChildren\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0455FindContentChildren.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0455FindContentChildren.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0455FindContentChildren.dir/build: 0455FindContentChildren.exe

.PHONY : CMakeFiles/0455FindContentChildren.dir/build

CMakeFiles/0455FindContentChildren.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0455FindContentChildren.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0455FindContentChildren.dir/clean

CMakeFiles/0455FindContentChildren.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\0455FindContentChildren D:\Algorithm\0455FindContentChildren D:\Algorithm\0455FindContentChildren\cmake-build-debug D:\Algorithm\0455FindContentChildren\cmake-build-debug D:\Algorithm\0455FindContentChildren\cmake-build-debug\CMakeFiles\0455FindContentChildren.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0455FindContentChildren.dir/depend
