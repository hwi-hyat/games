# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/siyoungkim/games

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/siyoungkim/games

# Include any dependencies generated for this target.
include CMakeFiles/Testy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Testy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Testy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Testy.dir/flags.make

CMakeFiles/Testy.dir/main.cc.o: CMakeFiles/Testy.dir/flags.make
CMakeFiles/Testy.dir/main.cc.o: main.cc
CMakeFiles/Testy.dir/main.cc.o: CMakeFiles/Testy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/siyoungkim/games/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Testy.dir/main.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Testy.dir/main.cc.o -MF CMakeFiles/Testy.dir/main.cc.o.d -o CMakeFiles/Testy.dir/main.cc.o -c /Users/siyoungkim/games/main.cc

CMakeFiles/Testy.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Testy.dir/main.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/siyoungkim/games/main.cc > CMakeFiles/Testy.dir/main.cc.i

CMakeFiles/Testy.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Testy.dir/main.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/siyoungkim/games/main.cc -o CMakeFiles/Testy.dir/main.cc.s

# Object files for target Testy
Testy_OBJECTS = \
"CMakeFiles/Testy.dir/main.cc.o"

# External object files for target Testy
Testy_EXTERNAL_OBJECTS =

Testy: CMakeFiles/Testy.dir/main.cc.o
Testy: CMakeFiles/Testy.dir/build.make
Testy: /opt/homebrew/lib/libsfml-graphics.2.6.1.dylib
Testy: /opt/homebrew/lib/libsfml-network.2.6.1.dylib
Testy: /opt/homebrew/lib/libsfml-audio.2.6.1.dylib
Testy: /opt/homebrew/lib/libsfml-window.2.6.1.dylib
Testy: /opt/homebrew/lib/libsfml-system.2.6.1.dylib
Testy: CMakeFiles/Testy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/siyoungkim/games/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Testy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Testy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Testy.dir/build: Testy
.PHONY : CMakeFiles/Testy.dir/build

CMakeFiles/Testy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Testy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Testy.dir/clean

CMakeFiles/Testy.dir/depend:
	cd /Users/siyoungkim/games && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/siyoungkim/games /Users/siyoungkim/games /Users/siyoungkim/games /Users/siyoungkim/games /Users/siyoungkim/games/CMakeFiles/Testy.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Testy.dir/depend
