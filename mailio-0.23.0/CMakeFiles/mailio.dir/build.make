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
include CMakeFiles/mailio.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mailio.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mailio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mailio.dir/flags.make

CMakeFiles/mailio.dir/src/base64.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/base64.cpp.o: src/base64.cpp
CMakeFiles/mailio.dir/src/base64.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mailio.dir/src/base64.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/base64.cpp.o -MF CMakeFiles/mailio.dir/src/base64.cpp.o.d -o CMakeFiles/mailio.dir/src/base64.cpp.o -c /home/TP-main/mailio-0.23.0/src/base64.cpp

CMakeFiles/mailio.dir/src/base64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/base64.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/base64.cpp > CMakeFiles/mailio.dir/src/base64.cpp.i

CMakeFiles/mailio.dir/src/base64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/base64.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/base64.cpp -o CMakeFiles/mailio.dir/src/base64.cpp.s

CMakeFiles/mailio.dir/src/binary.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/binary.cpp.o: src/binary.cpp
CMakeFiles/mailio.dir/src/binary.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mailio.dir/src/binary.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/binary.cpp.o -MF CMakeFiles/mailio.dir/src/binary.cpp.o.d -o CMakeFiles/mailio.dir/src/binary.cpp.o -c /home/TP-main/mailio-0.23.0/src/binary.cpp

CMakeFiles/mailio.dir/src/binary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/binary.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/binary.cpp > CMakeFiles/mailio.dir/src/binary.cpp.i

CMakeFiles/mailio.dir/src/binary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/binary.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/binary.cpp -o CMakeFiles/mailio.dir/src/binary.cpp.s

CMakeFiles/mailio.dir/src/bit7.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/bit7.cpp.o: src/bit7.cpp
CMakeFiles/mailio.dir/src/bit7.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mailio.dir/src/bit7.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/bit7.cpp.o -MF CMakeFiles/mailio.dir/src/bit7.cpp.o.d -o CMakeFiles/mailio.dir/src/bit7.cpp.o -c /home/TP-main/mailio-0.23.0/src/bit7.cpp

CMakeFiles/mailio.dir/src/bit7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/bit7.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/bit7.cpp > CMakeFiles/mailio.dir/src/bit7.cpp.i

CMakeFiles/mailio.dir/src/bit7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/bit7.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/bit7.cpp -o CMakeFiles/mailio.dir/src/bit7.cpp.s

CMakeFiles/mailio.dir/src/bit8.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/bit8.cpp.o: src/bit8.cpp
CMakeFiles/mailio.dir/src/bit8.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mailio.dir/src/bit8.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/bit8.cpp.o -MF CMakeFiles/mailio.dir/src/bit8.cpp.o.d -o CMakeFiles/mailio.dir/src/bit8.cpp.o -c /home/TP-main/mailio-0.23.0/src/bit8.cpp

CMakeFiles/mailio.dir/src/bit8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/bit8.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/bit8.cpp > CMakeFiles/mailio.dir/src/bit8.cpp.i

CMakeFiles/mailio.dir/src/bit8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/bit8.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/bit8.cpp -o CMakeFiles/mailio.dir/src/bit8.cpp.s

CMakeFiles/mailio.dir/src/codec.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/codec.cpp.o: src/codec.cpp
CMakeFiles/mailio.dir/src/codec.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mailio.dir/src/codec.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/codec.cpp.o -MF CMakeFiles/mailio.dir/src/codec.cpp.o.d -o CMakeFiles/mailio.dir/src/codec.cpp.o -c /home/TP-main/mailio-0.23.0/src/codec.cpp

CMakeFiles/mailio.dir/src/codec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/codec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/codec.cpp > CMakeFiles/mailio.dir/src/codec.cpp.i

CMakeFiles/mailio.dir/src/codec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/codec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/codec.cpp -o CMakeFiles/mailio.dir/src/codec.cpp.s

CMakeFiles/mailio.dir/src/dialog.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/dialog.cpp.o: src/dialog.cpp
CMakeFiles/mailio.dir/src/dialog.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/mailio.dir/src/dialog.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/dialog.cpp.o -MF CMakeFiles/mailio.dir/src/dialog.cpp.o.d -o CMakeFiles/mailio.dir/src/dialog.cpp.o -c /home/TP-main/mailio-0.23.0/src/dialog.cpp

CMakeFiles/mailio.dir/src/dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/dialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/dialog.cpp > CMakeFiles/mailio.dir/src/dialog.cpp.i

CMakeFiles/mailio.dir/src/dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/dialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/dialog.cpp -o CMakeFiles/mailio.dir/src/dialog.cpp.s

CMakeFiles/mailio.dir/src/imap.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/imap.cpp.o: src/imap.cpp
CMakeFiles/mailio.dir/src/imap.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/mailio.dir/src/imap.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/imap.cpp.o -MF CMakeFiles/mailio.dir/src/imap.cpp.o.d -o CMakeFiles/mailio.dir/src/imap.cpp.o -c /home/TP-main/mailio-0.23.0/src/imap.cpp

CMakeFiles/mailio.dir/src/imap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/imap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/imap.cpp > CMakeFiles/mailio.dir/src/imap.cpp.i

CMakeFiles/mailio.dir/src/imap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/imap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/imap.cpp -o CMakeFiles/mailio.dir/src/imap.cpp.s

CMakeFiles/mailio.dir/src/mailboxes.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/mailboxes.cpp.o: src/mailboxes.cpp
CMakeFiles/mailio.dir/src/mailboxes.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/mailio.dir/src/mailboxes.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/mailboxes.cpp.o -MF CMakeFiles/mailio.dir/src/mailboxes.cpp.o.d -o CMakeFiles/mailio.dir/src/mailboxes.cpp.o -c /home/TP-main/mailio-0.23.0/src/mailboxes.cpp

CMakeFiles/mailio.dir/src/mailboxes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/mailboxes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/mailboxes.cpp > CMakeFiles/mailio.dir/src/mailboxes.cpp.i

CMakeFiles/mailio.dir/src/mailboxes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/mailboxes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/mailboxes.cpp -o CMakeFiles/mailio.dir/src/mailboxes.cpp.s

CMakeFiles/mailio.dir/src/message.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/message.cpp.o: src/message.cpp
CMakeFiles/mailio.dir/src/message.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/mailio.dir/src/message.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/message.cpp.o -MF CMakeFiles/mailio.dir/src/message.cpp.o.d -o CMakeFiles/mailio.dir/src/message.cpp.o -c /home/TP-main/mailio-0.23.0/src/message.cpp

CMakeFiles/mailio.dir/src/message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/message.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/message.cpp > CMakeFiles/mailio.dir/src/message.cpp.i

CMakeFiles/mailio.dir/src/message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/message.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/message.cpp -o CMakeFiles/mailio.dir/src/message.cpp.s

CMakeFiles/mailio.dir/src/mime.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/mime.cpp.o: src/mime.cpp
CMakeFiles/mailio.dir/src/mime.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/mailio.dir/src/mime.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/mime.cpp.o -MF CMakeFiles/mailio.dir/src/mime.cpp.o.d -o CMakeFiles/mailio.dir/src/mime.cpp.o -c /home/TP-main/mailio-0.23.0/src/mime.cpp

CMakeFiles/mailio.dir/src/mime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/mime.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/mime.cpp > CMakeFiles/mailio.dir/src/mime.cpp.i

CMakeFiles/mailio.dir/src/mime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/mime.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/mime.cpp -o CMakeFiles/mailio.dir/src/mime.cpp.s

CMakeFiles/mailio.dir/src/pop3.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/pop3.cpp.o: src/pop3.cpp
CMakeFiles/mailio.dir/src/pop3.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/mailio.dir/src/pop3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/pop3.cpp.o -MF CMakeFiles/mailio.dir/src/pop3.cpp.o.d -o CMakeFiles/mailio.dir/src/pop3.cpp.o -c /home/TP-main/mailio-0.23.0/src/pop3.cpp

CMakeFiles/mailio.dir/src/pop3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/pop3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/pop3.cpp > CMakeFiles/mailio.dir/src/pop3.cpp.i

CMakeFiles/mailio.dir/src/pop3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/pop3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/pop3.cpp -o CMakeFiles/mailio.dir/src/pop3.cpp.s

CMakeFiles/mailio.dir/src/quoted_printable.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/quoted_printable.cpp.o: src/quoted_printable.cpp
CMakeFiles/mailio.dir/src/quoted_printable.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/mailio.dir/src/quoted_printable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/quoted_printable.cpp.o -MF CMakeFiles/mailio.dir/src/quoted_printable.cpp.o.d -o CMakeFiles/mailio.dir/src/quoted_printable.cpp.o -c /home/TP-main/mailio-0.23.0/src/quoted_printable.cpp

CMakeFiles/mailio.dir/src/quoted_printable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/quoted_printable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/quoted_printable.cpp > CMakeFiles/mailio.dir/src/quoted_printable.cpp.i

CMakeFiles/mailio.dir/src/quoted_printable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/quoted_printable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/quoted_printable.cpp -o CMakeFiles/mailio.dir/src/quoted_printable.cpp.s

CMakeFiles/mailio.dir/src/q_codec.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/q_codec.cpp.o: src/q_codec.cpp
CMakeFiles/mailio.dir/src/q_codec.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/mailio.dir/src/q_codec.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/q_codec.cpp.o -MF CMakeFiles/mailio.dir/src/q_codec.cpp.o.d -o CMakeFiles/mailio.dir/src/q_codec.cpp.o -c /home/TP-main/mailio-0.23.0/src/q_codec.cpp

CMakeFiles/mailio.dir/src/q_codec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/q_codec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/q_codec.cpp > CMakeFiles/mailio.dir/src/q_codec.cpp.i

CMakeFiles/mailio.dir/src/q_codec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/q_codec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/q_codec.cpp -o CMakeFiles/mailio.dir/src/q_codec.cpp.s

CMakeFiles/mailio.dir/src/smtp.cpp.o: CMakeFiles/mailio.dir/flags.make
CMakeFiles/mailio.dir/src/smtp.cpp.o: src/smtp.cpp
CMakeFiles/mailio.dir/src/smtp.cpp.o: CMakeFiles/mailio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/mailio.dir/src/smtp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mailio.dir/src/smtp.cpp.o -MF CMakeFiles/mailio.dir/src/smtp.cpp.o.d -o CMakeFiles/mailio.dir/src/smtp.cpp.o -c /home/TP-main/mailio-0.23.0/src/smtp.cpp

CMakeFiles/mailio.dir/src/smtp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mailio.dir/src/smtp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/TP-main/mailio-0.23.0/src/smtp.cpp > CMakeFiles/mailio.dir/src/smtp.cpp.i

CMakeFiles/mailio.dir/src/smtp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mailio.dir/src/smtp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/TP-main/mailio-0.23.0/src/smtp.cpp -o CMakeFiles/mailio.dir/src/smtp.cpp.s

# Object files for target mailio
mailio_OBJECTS = \
"CMakeFiles/mailio.dir/src/base64.cpp.o" \
"CMakeFiles/mailio.dir/src/binary.cpp.o" \
"CMakeFiles/mailio.dir/src/bit7.cpp.o" \
"CMakeFiles/mailio.dir/src/bit8.cpp.o" \
"CMakeFiles/mailio.dir/src/codec.cpp.o" \
"CMakeFiles/mailio.dir/src/dialog.cpp.o" \
"CMakeFiles/mailio.dir/src/imap.cpp.o" \
"CMakeFiles/mailio.dir/src/mailboxes.cpp.o" \
"CMakeFiles/mailio.dir/src/message.cpp.o" \
"CMakeFiles/mailio.dir/src/mime.cpp.o" \
"CMakeFiles/mailio.dir/src/pop3.cpp.o" \
"CMakeFiles/mailio.dir/src/quoted_printable.cpp.o" \
"CMakeFiles/mailio.dir/src/q_codec.cpp.o" \
"CMakeFiles/mailio.dir/src/smtp.cpp.o"

# External object files for target mailio
mailio_EXTERNAL_OBJECTS =

libmailio.so: CMakeFiles/mailio.dir/src/base64.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/binary.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/bit7.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/bit8.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/codec.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/dialog.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/imap.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/mailboxes.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/message.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/mime.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/pop3.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/quoted_printable.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/q_codec.cpp.o
libmailio.so: CMakeFiles/mailio.dir/src/smtp.cpp.o
libmailio.so: CMakeFiles/mailio.dir/build.make
libmailio.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
libmailio.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
libmailio.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
libmailio.so: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.74.0
libmailio.so: /usr/lib/x86_64-linux-gnu/libssl.so
libmailio.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
libmailio.so: CMakeFiles/mailio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/TP-main/mailio-0.23.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX shared library libmailio.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mailio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mailio.dir/build: libmailio.so
.PHONY : CMakeFiles/mailio.dir/build

CMakeFiles/mailio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mailio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mailio.dir/clean

CMakeFiles/mailio.dir/depend:
	cd /home/TP-main/mailio-0.23.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0 /home/TP-main/mailio-0.23.0/CMakeFiles/mailio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mailio.dir/depend

