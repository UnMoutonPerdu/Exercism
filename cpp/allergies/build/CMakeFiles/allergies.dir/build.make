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
CMAKE_SOURCE_DIR = /home/hugons/exercism/cpp/allergies

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hugons/exercism/cpp/allergies/build

# Include any dependencies generated for this target.
include CMakeFiles/allergies.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/allergies.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/allergies.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/allergies.dir/flags.make

CMakeFiles/allergies.dir/allergies_test.cpp.o: CMakeFiles/allergies.dir/flags.make
CMakeFiles/allergies.dir/allergies_test.cpp.o: ../allergies_test.cpp
CMakeFiles/allergies.dir/allergies_test.cpp.o: CMakeFiles/allergies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hugons/exercism/cpp/allergies/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/allergies.dir/allergies_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/allergies.dir/allergies_test.cpp.o -MF CMakeFiles/allergies.dir/allergies_test.cpp.o.d -o CMakeFiles/allergies.dir/allergies_test.cpp.o -c /home/hugons/exercism/cpp/allergies/allergies_test.cpp

CMakeFiles/allergies.dir/allergies_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/allergies.dir/allergies_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hugons/exercism/cpp/allergies/allergies_test.cpp > CMakeFiles/allergies.dir/allergies_test.cpp.i

CMakeFiles/allergies.dir/allergies_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/allergies.dir/allergies_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hugons/exercism/cpp/allergies/allergies_test.cpp -o CMakeFiles/allergies.dir/allergies_test.cpp.s

CMakeFiles/allergies.dir/allergies.cpp.o: CMakeFiles/allergies.dir/flags.make
CMakeFiles/allergies.dir/allergies.cpp.o: ../allergies.cpp
CMakeFiles/allergies.dir/allergies.cpp.o: CMakeFiles/allergies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hugons/exercism/cpp/allergies/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/allergies.dir/allergies.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/allergies.dir/allergies.cpp.o -MF CMakeFiles/allergies.dir/allergies.cpp.o.d -o CMakeFiles/allergies.dir/allergies.cpp.o -c /home/hugons/exercism/cpp/allergies/allergies.cpp

CMakeFiles/allergies.dir/allergies.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/allergies.dir/allergies.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hugons/exercism/cpp/allergies/allergies.cpp > CMakeFiles/allergies.dir/allergies.cpp.i

CMakeFiles/allergies.dir/allergies.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/allergies.dir/allergies.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hugons/exercism/cpp/allergies/allergies.cpp -o CMakeFiles/allergies.dir/allergies.cpp.s

CMakeFiles/allergies.dir/test/tests-main.cpp.o: CMakeFiles/allergies.dir/flags.make
CMakeFiles/allergies.dir/test/tests-main.cpp.o: ../test/tests-main.cpp
CMakeFiles/allergies.dir/test/tests-main.cpp.o: CMakeFiles/allergies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hugons/exercism/cpp/allergies/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/allergies.dir/test/tests-main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/allergies.dir/test/tests-main.cpp.o -MF CMakeFiles/allergies.dir/test/tests-main.cpp.o.d -o CMakeFiles/allergies.dir/test/tests-main.cpp.o -c /home/hugons/exercism/cpp/allergies/test/tests-main.cpp

CMakeFiles/allergies.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/allergies.dir/test/tests-main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hugons/exercism/cpp/allergies/test/tests-main.cpp > CMakeFiles/allergies.dir/test/tests-main.cpp.i

CMakeFiles/allergies.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/allergies.dir/test/tests-main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hugons/exercism/cpp/allergies/test/tests-main.cpp -o CMakeFiles/allergies.dir/test/tests-main.cpp.s

# Object files for target allergies
allergies_OBJECTS = \
"CMakeFiles/allergies.dir/allergies_test.cpp.o" \
"CMakeFiles/allergies.dir/allergies.cpp.o" \
"CMakeFiles/allergies.dir/test/tests-main.cpp.o"

# External object files for target allergies
allergies_EXTERNAL_OBJECTS =

allergies: CMakeFiles/allergies.dir/allergies_test.cpp.o
allergies: CMakeFiles/allergies.dir/allergies.cpp.o
allergies: CMakeFiles/allergies.dir/test/tests-main.cpp.o
allergies: CMakeFiles/allergies.dir/build.make
allergies: CMakeFiles/allergies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hugons/exercism/cpp/allergies/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable allergies"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/allergies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/allergies.dir/build: allergies
.PHONY : CMakeFiles/allergies.dir/build

CMakeFiles/allergies.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/allergies.dir/cmake_clean.cmake
.PHONY : CMakeFiles/allergies.dir/clean

CMakeFiles/allergies.dir/depend:
	cd /home/hugons/exercism/cpp/allergies/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hugons/exercism/cpp/allergies /home/hugons/exercism/cpp/allergies /home/hugons/exercism/cpp/allergies/build /home/hugons/exercism/cpp/allergies/build /home/hugons/exercism/cpp/allergies/build/CMakeFiles/allergies.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/allergies.dir/depend

