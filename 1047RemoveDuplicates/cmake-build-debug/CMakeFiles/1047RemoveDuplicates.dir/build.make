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
CMAKE_SOURCE_DIR = D:\Algorithm\1047RemoveDuplicates

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\1047RemoveDuplicates\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1047RemoveDuplicates.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1047RemoveDuplicates.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1047RemoveDuplicates.dir/flags.make

CMakeFiles/1047RemoveDuplicates.dir/main.cpp.obj: CMakeFiles/1047RemoveDuplicates.dir/flags.make
CMakeFiles/1047RemoveDuplicates.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\1047RemoveDuplicates\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1047RemoveDuplicates.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1047RemoveDuplicates.dir\main.cpp.obj -c D:\Algorithm\1047RemoveDuplicates\main.cpp

CMakeFiles/1047RemoveDuplicates.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1047RemoveDuplicates.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\1047RemoveDuplicates\main.cpp > CMakeFiles\1047RemoveDuplicates.dir\main.cpp.i

CMakeFiles/1047RemoveDuplicates.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1047RemoveDuplicates.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\1047RemoveDuplicates\main.cpp -o CMakeFiles\1047RemoveDuplicates.dir\main.cpp.s

# Object files for target 1047RemoveDuplicates
1047RemoveDuplicates_OBJECTS = \
"CMakeFiles/1047RemoveDuplicates.dir/main.cpp.obj"

# External object files for target 1047RemoveDuplicates
1047RemoveDuplicates_EXTERNAL_OBJECTS =

1047RemoveDuplicates.exe: CMakeFiles/1047RemoveDuplicates.dir/main.cpp.obj
1047RemoveDuplicates.exe: CMakeFiles/1047RemoveDuplicates.dir/build.make
1047RemoveDuplicates.exe: CMakeFiles/1047RemoveDuplicates.dir/linklibs.rsp
1047RemoveDuplicates.exe: CMakeFiles/1047RemoveDuplicates.dir/objects1.rsp
1047RemoveDuplicates.exe: CMakeFiles/1047RemoveDuplicates.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\1047RemoveDuplicates\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1047RemoveDuplicates.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1047RemoveDuplicates.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1047RemoveDuplicates.dir/build: 1047RemoveDuplicates.exe

.PHONY : CMakeFiles/1047RemoveDuplicates.dir/build

CMakeFiles/1047RemoveDuplicates.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1047RemoveDuplicates.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1047RemoveDuplicates.dir/clean

CMakeFiles/1047RemoveDuplicates.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\1047RemoveDuplicates D:\Algorithm\1047RemoveDuplicates D:\Algorithm\1047RemoveDuplicates\cmake-build-debug D:\Algorithm\1047RemoveDuplicates\cmake-build-debug D:\Algorithm\1047RemoveDuplicates\cmake-build-debug\CMakeFiles\1047RemoveDuplicates.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1047RemoveDuplicates.dir/depend

