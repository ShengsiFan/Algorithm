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
CMAKE_SOURCE_DIR = D:\Algorithm\1049LastStoneWeightII

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\1049LastStoneWeightII\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1049LastStoneWeightII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1049LastStoneWeightII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1049LastStoneWeightII.dir/flags.make

CMakeFiles/1049LastStoneWeightII.dir/main.cpp.obj: CMakeFiles/1049LastStoneWeightII.dir/flags.make
CMakeFiles/1049LastStoneWeightII.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\1049LastStoneWeightII\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1049LastStoneWeightII.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1049LastStoneWeightII.dir\main.cpp.obj -c D:\Algorithm\1049LastStoneWeightII\main.cpp

CMakeFiles/1049LastStoneWeightII.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1049LastStoneWeightII.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\1049LastStoneWeightII\main.cpp > CMakeFiles\1049LastStoneWeightII.dir\main.cpp.i

CMakeFiles/1049LastStoneWeightII.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1049LastStoneWeightII.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\1049LastStoneWeightII\main.cpp -o CMakeFiles\1049LastStoneWeightII.dir\main.cpp.s

# Object files for target 1049LastStoneWeightII
1049LastStoneWeightII_OBJECTS = \
"CMakeFiles/1049LastStoneWeightII.dir/main.cpp.obj"

# External object files for target 1049LastStoneWeightII
1049LastStoneWeightII_EXTERNAL_OBJECTS =

1049LastStoneWeightII.exe: CMakeFiles/1049LastStoneWeightII.dir/main.cpp.obj
1049LastStoneWeightII.exe: CMakeFiles/1049LastStoneWeightII.dir/build.make
1049LastStoneWeightII.exe: CMakeFiles/1049LastStoneWeightII.dir/linklibs.rsp
1049LastStoneWeightII.exe: CMakeFiles/1049LastStoneWeightII.dir/objects1.rsp
1049LastStoneWeightII.exe: CMakeFiles/1049LastStoneWeightII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\1049LastStoneWeightII\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1049LastStoneWeightII.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1049LastStoneWeightII.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1049LastStoneWeightII.dir/build: 1049LastStoneWeightII.exe

.PHONY : CMakeFiles/1049LastStoneWeightII.dir/build

CMakeFiles/1049LastStoneWeightII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1049LastStoneWeightII.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1049LastStoneWeightII.dir/clean

CMakeFiles/1049LastStoneWeightII.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\1049LastStoneWeightII D:\Algorithm\1049LastStoneWeightII D:\Algorithm\1049LastStoneWeightII\cmake-build-debug D:\Algorithm\1049LastStoneWeightII\cmake-build-debug D:\Algorithm\1049LastStoneWeightII\cmake-build-debug\CMakeFiles\1049LastStoneWeightII.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1049LastStoneWeightII.dir/depend

