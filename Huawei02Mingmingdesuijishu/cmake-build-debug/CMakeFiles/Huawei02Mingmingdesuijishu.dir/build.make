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
CMAKE_SOURCE_DIR = D:\Algorithm\Huawei02Mingmingdesuijishu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Huawei02Mingmingdesuijishu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Huawei02Mingmingdesuijishu.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Huawei02Mingmingdesuijishu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Huawei02Mingmingdesuijishu.dir/flags.make

CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj: CMakeFiles/Huawei02Mingmingdesuijishu.dir/flags.make
CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj: D:/Algorithm/Huawei02Mingmingdesuijishu/main.cpp
CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj: CMakeFiles/Huawei02Mingmingdesuijishu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj -MF CMakeFiles\Huawei02Mingmingdesuijishu.dir\main.cpp.obj.d -o CMakeFiles\Huawei02Mingmingdesuijishu.dir\main.cpp.obj -c D:\Algorithm\Huawei02Mingmingdesuijishu\main.cpp

CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Algorithm\Huawei02Mingmingdesuijishu\main.cpp > CMakeFiles\Huawei02Mingmingdesuijishu.dir\main.cpp.i

CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Algorithm\Huawei02Mingmingdesuijishu\main.cpp -o CMakeFiles\Huawei02Mingmingdesuijishu.dir\main.cpp.s

# Object files for target Huawei02Mingmingdesuijishu
Huawei02Mingmingdesuijishu_OBJECTS = \
"CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj"

# External object files for target Huawei02Mingmingdesuijishu
Huawei02Mingmingdesuijishu_EXTERNAL_OBJECTS =

Huawei02Mingmingdesuijishu.exe: CMakeFiles/Huawei02Mingmingdesuijishu.dir/main.cpp.obj
Huawei02Mingmingdesuijishu.exe: CMakeFiles/Huawei02Mingmingdesuijishu.dir/build.make
Huawei02Mingmingdesuijishu.exe: CMakeFiles/Huawei02Mingmingdesuijishu.dir/linkLibs.rsp
Huawei02Mingmingdesuijishu.exe: CMakeFiles/Huawei02Mingmingdesuijishu.dir/objects1
Huawei02Mingmingdesuijishu.exe: CMakeFiles/Huawei02Mingmingdesuijishu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Huawei02Mingmingdesuijishu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Huawei02Mingmingdesuijishu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Huawei02Mingmingdesuijishu.dir/build: Huawei02Mingmingdesuijishu.exe
.PHONY : CMakeFiles/Huawei02Mingmingdesuijishu.dir/build

CMakeFiles/Huawei02Mingmingdesuijishu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Huawei02Mingmingdesuijishu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Huawei02Mingmingdesuijishu.dir/clean

CMakeFiles/Huawei02Mingmingdesuijishu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Algorithm\Huawei02Mingmingdesuijishu D:\Algorithm\Huawei02Mingmingdesuijishu D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug D:\Algorithm\Huawei02Mingmingdesuijishu\cmake-build-debug\CMakeFiles\Huawei02Mingmingdesuijishu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Huawei02Mingmingdesuijishu.dir/depend

