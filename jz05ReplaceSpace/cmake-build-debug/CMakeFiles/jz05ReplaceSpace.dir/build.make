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
CMAKE_SOURCE_DIR = D:\Algorithm\jz05ReplaceSpace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\jz05ReplaceSpace\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/jz05ReplaceSpace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jz05ReplaceSpace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jz05ReplaceSpace.dir/flags.make

CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.obj: CMakeFiles/jz05ReplaceSpace.dir/flags.make
CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.obj: ../main2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\jz05ReplaceSpace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\jz05ReplaceSpace.dir\main2.cpp.obj -c D:\Algorithm\jz05ReplaceSpace\main2.cpp

CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\jz05ReplaceSpace\main2.cpp > CMakeFiles\jz05ReplaceSpace.dir\main2.cpp.i

CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\jz05ReplaceSpace\main2.cpp -o CMakeFiles\jz05ReplaceSpace.dir\main2.cpp.s

# Object files for target jz05ReplaceSpace
jz05ReplaceSpace_OBJECTS = \
"CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.obj"

# External object files for target jz05ReplaceSpace
jz05ReplaceSpace_EXTERNAL_OBJECTS =

jz05ReplaceSpace.exe: CMakeFiles/jz05ReplaceSpace.dir/main2.cpp.obj
jz05ReplaceSpace.exe: CMakeFiles/jz05ReplaceSpace.dir/build.make
jz05ReplaceSpace.exe: CMakeFiles/jz05ReplaceSpace.dir/linklibs.rsp
jz05ReplaceSpace.exe: CMakeFiles/jz05ReplaceSpace.dir/objects1.rsp
jz05ReplaceSpace.exe: CMakeFiles/jz05ReplaceSpace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\jz05ReplaceSpace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jz05ReplaceSpace.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\jz05ReplaceSpace.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jz05ReplaceSpace.dir/build: jz05ReplaceSpace.exe

.PHONY : CMakeFiles/jz05ReplaceSpace.dir/build

CMakeFiles/jz05ReplaceSpace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\jz05ReplaceSpace.dir\cmake_clean.cmake
.PHONY : CMakeFiles/jz05ReplaceSpace.dir/clean

CMakeFiles/jz05ReplaceSpace.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\jz05ReplaceSpace D:\Algorithm\jz05ReplaceSpace D:\Algorithm\jz05ReplaceSpace\cmake-build-debug D:\Algorithm\jz05ReplaceSpace\cmake-build-debug D:\Algorithm\jz05ReplaceSpace\cmake-build-debug\CMakeFiles\jz05ReplaceSpace.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jz05ReplaceSpace.dir/depend

