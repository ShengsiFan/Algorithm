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
CMAKE_SOURCE_DIR = D:\Algorithm\0047PermuteUnique

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\0047PermuteUnique\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0047PermuteUnique.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0047PermuteUnique.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0047PermuteUnique.dir/flags.make

CMakeFiles/0047PermuteUnique.dir/main.cpp.obj: CMakeFiles/0047PermuteUnique.dir/flags.make
CMakeFiles/0047PermuteUnique.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\0047PermuteUnique\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0047PermuteUnique.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0047PermuteUnique.dir\main.cpp.obj -c D:\Algorithm\0047PermuteUnique\main.cpp

CMakeFiles/0047PermuteUnique.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0047PermuteUnique.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\0047PermuteUnique\main.cpp > CMakeFiles\0047PermuteUnique.dir\main.cpp.i

CMakeFiles/0047PermuteUnique.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0047PermuteUnique.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\0047PermuteUnique\main.cpp -o CMakeFiles\0047PermuteUnique.dir\main.cpp.s

# Object files for target 0047PermuteUnique
0047PermuteUnique_OBJECTS = \
"CMakeFiles/0047PermuteUnique.dir/main.cpp.obj"

# External object files for target 0047PermuteUnique
0047PermuteUnique_EXTERNAL_OBJECTS =

0047PermuteUnique.exe: CMakeFiles/0047PermuteUnique.dir/main.cpp.obj
0047PermuteUnique.exe: CMakeFiles/0047PermuteUnique.dir/build.make
0047PermuteUnique.exe: CMakeFiles/0047PermuteUnique.dir/linklibs.rsp
0047PermuteUnique.exe: CMakeFiles/0047PermuteUnique.dir/objects1.rsp
0047PermuteUnique.exe: CMakeFiles/0047PermuteUnique.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\0047PermuteUnique\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0047PermuteUnique.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0047PermuteUnique.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0047PermuteUnique.dir/build: 0047PermuteUnique.exe

.PHONY : CMakeFiles/0047PermuteUnique.dir/build

CMakeFiles/0047PermuteUnique.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0047PermuteUnique.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0047PermuteUnique.dir/clean

CMakeFiles/0047PermuteUnique.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\0047PermuteUnique D:\Algorithm\0047PermuteUnique D:\Algorithm\0047PermuteUnique\cmake-build-debug D:\Algorithm\0047PermuteUnique\cmake-build-debug D:\Algorithm\0047PermuteUnique\cmake-build-debug\CMakeFiles\0047PermuteUnique.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0047PermuteUnique.dir/depend

