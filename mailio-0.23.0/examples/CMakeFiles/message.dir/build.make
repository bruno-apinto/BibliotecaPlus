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
include examples/CMakeFiles/message.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/message.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/message.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/message.dir/flags.make

examples/CMakeFiles/message.dir/message.cpp.o: examples/CMakeFiles/message.dir/flags.make
examples/CMakeFiles/message.dir/message.cpp.o: examples/message.cpp
examples/CMakeFiles/message.dir/message.cpp.o: examples/CMakeFiles/message.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/message.dir/message.cpp.o"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/message.dir/message.cpp.o -MF CMakeFiles/message.dir/message.cpp.o.d -o CMakeFiles/message.dir/message.cpp.o -c /home/TP-main/mailio-0.23.0/examples/message.cpp

examples/CMakeFiles/message.dir/message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/message.dir/message.cpp.i"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/examples/message.cpp > CMakeFiles/message.dir/message.cpp.i

examples/CMakeFiles/message.dir/message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/message.dir/message.cpp.s"
	cd /home/TP-main/mailio-0.23.0/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/examples/message.cpp -o CMakeFiles/message.dir/message.cpp.s

# Object files for target message
message_OBJECTS = \
"CMakeFiles/message.dir/message.cpp.o"

# External object files for target message
message_EXTERNAL_OBJECTS =

examples/message: examples/CMakeFiles/message.dir/message.cpp.o
examples/message: examples/CMakeFiles/message.dir/build.make
examples/message: libmailio.so
examples/message: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
examples/message: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
examples/message: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
examples/message: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.74.0
examples/message: /usr/lib/x86_64-linux-gnu/libssl.so
examples/message: /usr/lib/x86_64-linux-gnu/libcrypto.so
examples/message: examples/CMakeFiles/message.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable message"
	cd /home/TP-main/mailio-0.23.0/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/message.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/message.dir/build: examples/message
.PHONY : examples/CMakeFiles/message.dir/build

examples/CMakeFiles/message.dir/clean:
	cd /home/TP-main/mailio-0.23.0/examples && $(CMAKE_COMMAND) -P CMakeFiles/message.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/message.dir/clean

examples/CMakeFiles/message.dir/depend:
	cd /home/TP-main/mailio-0.23.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0/examples /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0/examples /home/TP-main/mailio-0.23.0/examples/CMakeFiles/message.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/message.dir/depend

