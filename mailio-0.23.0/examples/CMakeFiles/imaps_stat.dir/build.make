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
CMAKE_SOURCE_DIR = /home/TP-main/mailio-0.23.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/TP-main/mailio-0.23.0

# Include any dependencies generated for this target.
include examples/CMakeFiles/imaps_stat.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/imaps_stat.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/imaps_stat.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/imaps_stat.dir/flags.make

examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o: examples/CMakeFiles/imaps_stat.dir/flags.make
examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o: examples/imaps_stat.cpp
examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o: examples/CMakeFiles/imaps_stat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o -MF CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o.d -o CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o -c /home/TP-main/mailio-0.23.0/examples/imaps_stat.cpp

examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imaps_stat.dir/imaps_stat.cpp.i"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/examples/imaps_stat.cpp > CMakeFiles/imaps_stat.dir/imaps_stat.cpp.i

examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imaps_stat.dir/imaps_stat.cpp.s"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/examples/imaps_stat.cpp -o CMakeFiles/imaps_stat.dir/imaps_stat.cpp.s

# Object files for target imaps_stat
imaps_stat_OBJECTS = \
"CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o"

# External object files for target imaps_stat
imaps_stat_EXTERNAL_OBJECTS =

examples/imaps_stat: examples/CMakeFiles/imaps_stat.dir/imaps_stat.cpp.o
examples/imaps_stat: examples/CMakeFiles/imaps_stat.dir/build.make
examples/imaps_stat: libmailio.so
examples/imaps_stat: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
examples/imaps_stat: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
examples/imaps_stat: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
examples/imaps_stat: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.74.0
examples/imaps_stat: examples/CMakeFiles/imaps_stat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imaps_stat"
	cd /home/TP-main/mailio-0.23.0/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imaps_stat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/imaps_stat.dir/build: examples/imaps_stat
.PHONY : examples/CMakeFiles/imaps_stat.dir/build

examples/CMakeFiles/imaps_stat.dir/clean:
	cd /home/TP-main/mailio-0.23.0/examples && $(CMAKE_COMMAND) -P CMakeFiles/imaps_stat.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/imaps_stat.dir/clean

examples/CMakeFiles/imaps_stat.dir/depend:
	cd /home/TP-main/mailio-0.23.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0/examples /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0/examples /home/TP-main/mailio-0.23.0/examples/CMakeFiles/imaps_stat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/imaps_stat.dir/depend
