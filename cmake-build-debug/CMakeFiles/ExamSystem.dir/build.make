# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/lanhao/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/lanhao/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lanhao/C++_Program/ExamSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ExamSystem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ExamSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ExamSystem.dir/flags.make

CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o: CMakeFiles/ExamSystem.dir/flags.make
CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o: ExamSystem_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o -c /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/ExamSystem_autogen/mocs_compilation.cpp

CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/ExamSystem_autogen/mocs_compilation.cpp > CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.i

CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/ExamSystem_autogen/mocs_compilation.cpp -o CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.s

CMakeFiles/ExamSystem.dir/main.cpp.o: CMakeFiles/ExamSystem.dir/flags.make
CMakeFiles/ExamSystem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ExamSystem.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ExamSystem.dir/main.cpp.o -c /Users/lanhao/C++_Program/ExamSystem/main.cpp

CMakeFiles/ExamSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExamSystem.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lanhao/C++_Program/ExamSystem/main.cpp > CMakeFiles/ExamSystem.dir/main.cpp.i

CMakeFiles/ExamSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExamSystem.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lanhao/C++_Program/ExamSystem/main.cpp -o CMakeFiles/ExamSystem.dir/main.cpp.s

# Object files for target ExamSystem
ExamSystem_OBJECTS = \
"CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ExamSystem.dir/main.cpp.o"

# External object files for target ExamSystem
ExamSystem_EXTERNAL_OBJECTS =

ExamSystem: CMakeFiles/ExamSystem.dir/ExamSystem_autogen/mocs_compilation.cpp.o
ExamSystem: CMakeFiles/ExamSystem.dir/main.cpp.o
ExamSystem: CMakeFiles/ExamSystem.dir/build.make
ExamSystem: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
ExamSystem: CMakeFiles/ExamSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ExamSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExamSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ExamSystem.dir/build: ExamSystem
.PHONY : CMakeFiles/ExamSystem.dir/build

CMakeFiles/ExamSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ExamSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ExamSystem.dir/clean

CMakeFiles/ExamSystem.dir/depend:
	cd /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lanhao/C++_Program/ExamSystem /Users/lanhao/C++_Program/ExamSystem /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug /Users/lanhao/C++_Program/ExamSystem/cmake-build-debug/CMakeFiles/ExamSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ExamSystem.dir/depend
