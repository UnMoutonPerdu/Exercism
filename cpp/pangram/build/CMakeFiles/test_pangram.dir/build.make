# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hugons/exercism/cpp/pangram

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hugons/exercism/cpp/pangram/build

# Utility rule file for test_pangram.

# Include any custom commands dependencies for this target.
include CMakeFiles/test_pangram.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_pangram.dir/progress.make

CMakeFiles/test_pangram: pangram
	./pangram

test_pangram: CMakeFiles/test_pangram
test_pangram: CMakeFiles/test_pangram.dir/build.make
.PHONY : test_pangram

# Rule to build all files generated by this target.
CMakeFiles/test_pangram.dir/build: test_pangram
.PHONY : CMakeFiles/test_pangram.dir/build

CMakeFiles/test_pangram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_pangram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_pangram.dir/clean

CMakeFiles/test_pangram.dir/depend:
	cd /home/hugons/exercism/cpp/pangram/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hugons/exercism/cpp/pangram /home/hugons/exercism/cpp/pangram /home/hugons/exercism/cpp/pangram/build /home/hugons/exercism/cpp/pangram/build /home/hugons/exercism/cpp/pangram/build/CMakeFiles/test_pangram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_pangram.dir/depend

