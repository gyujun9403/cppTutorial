# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ygj/Documents/GitHub/cppTutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ygj/Documents/GitHub/cppTutorial

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/ygj/Documents/GitHub/cppTutorial/CMakeFiles /Users/ygj/Documents/GitHub/cppTutorial//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/ygj/Documents/GitHub/cppTutorial/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named 3-4

# Build rule for target.
3-4: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 3-4
.PHONY : 3-4

# fast build rule for target.
3-4/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-4.dir/build.make CMakeFiles/3-4.dir/build
.PHONY : 3-4/fast

#=============================================================================
# Target rules for targets named 3-3

# Build rule for target.
3-3: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 3-3
.PHONY : 3-3

# fast build rule for target.
3-3/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-3.dir/build.make CMakeFiles/3-3.dir/build
.PHONY : 3-3/fast

#=============================================================================
# Target rules for targets named 3-2

# Build rule for target.
3-2: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 3-2
.PHONY : 3-2

# fast build rule for target.
3-2/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-2.dir/build.make CMakeFiles/3-2.dir/build
.PHONY : 3-2/fast

#=============================================================================
# Target rules for targets named 3-0

# Build rule for target.
3-0: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 3-0
.PHONY : 3-0

# fast build rule for target.
3-0/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-0.dir/build.make CMakeFiles/3-0.dir/build
.PHONY : 3-0/fast

chapter03/3-0.o: chapter03/3-0.cpp.o
.PHONY : chapter03/3-0.o

# target to build an object file
chapter03/3-0.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-0.dir/build.make CMakeFiles/3-0.dir/chapter03/3-0.cpp.o
.PHONY : chapter03/3-0.cpp.o

chapter03/3-0.i: chapter03/3-0.cpp.i
.PHONY : chapter03/3-0.i

# target to preprocess a source file
chapter03/3-0.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-0.dir/build.make CMakeFiles/3-0.dir/chapter03/3-0.cpp.i
.PHONY : chapter03/3-0.cpp.i

chapter03/3-0.s: chapter03/3-0.cpp.s
.PHONY : chapter03/3-0.s

# target to generate assembly for a file
chapter03/3-0.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-0.dir/build.make CMakeFiles/3-0.dir/chapter03/3-0.cpp.s
.PHONY : chapter03/3-0.cpp.s

chapter03/3-2.o: chapter03/3-2.cpp.o
.PHONY : chapter03/3-2.o

# target to build an object file
chapter03/3-2.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-2.dir/build.make CMakeFiles/3-2.dir/chapter03/3-2.cpp.o
.PHONY : chapter03/3-2.cpp.o

chapter03/3-2.i: chapter03/3-2.cpp.i
.PHONY : chapter03/3-2.i

# target to preprocess a source file
chapter03/3-2.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-2.dir/build.make CMakeFiles/3-2.dir/chapter03/3-2.cpp.i
.PHONY : chapter03/3-2.cpp.i

chapter03/3-2.s: chapter03/3-2.cpp.s
.PHONY : chapter03/3-2.s

# target to generate assembly for a file
chapter03/3-2.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-2.dir/build.make CMakeFiles/3-2.dir/chapter03/3-2.cpp.s
.PHONY : chapter03/3-2.cpp.s

chapter03/3-3.o: chapter03/3-3.cpp.o
.PHONY : chapter03/3-3.o

# target to build an object file
chapter03/3-3.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-3.dir/build.make CMakeFiles/3-3.dir/chapter03/3-3.cpp.o
.PHONY : chapter03/3-3.cpp.o

chapter03/3-3.i: chapter03/3-3.cpp.i
.PHONY : chapter03/3-3.i

# target to preprocess a source file
chapter03/3-3.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-3.dir/build.make CMakeFiles/3-3.dir/chapter03/3-3.cpp.i
.PHONY : chapter03/3-3.cpp.i

chapter03/3-3.s: chapter03/3-3.cpp.s
.PHONY : chapter03/3-3.s

# target to generate assembly for a file
chapter03/3-3.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-3.dir/build.make CMakeFiles/3-3.dir/chapter03/3-3.cpp.s
.PHONY : chapter03/3-3.cpp.s

chapter03/3-4.o: chapter03/3-4.cpp.o
.PHONY : chapter03/3-4.o

# target to build an object file
chapter03/3-4.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-4.dir/build.make CMakeFiles/3-4.dir/chapter03/3-4.cpp.o
.PHONY : chapter03/3-4.cpp.o

chapter03/3-4.i: chapter03/3-4.cpp.i
.PHONY : chapter03/3-4.i

# target to preprocess a source file
chapter03/3-4.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-4.dir/build.make CMakeFiles/3-4.dir/chapter03/3-4.cpp.i
.PHONY : chapter03/3-4.cpp.i

chapter03/3-4.s: chapter03/3-4.cpp.s
.PHONY : chapter03/3-4.s

# target to generate assembly for a file
chapter03/3-4.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/3-4.dir/build.make CMakeFiles/3-4.dir/chapter03/3-4.cpp.s
.PHONY : chapter03/3-4.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... 3-0"
	@echo "... 3-2"
	@echo "... 3-3"
	@echo "... 3-4"
	@echo "... chapter03/3-0.o"
	@echo "... chapter03/3-0.i"
	@echo "... chapter03/3-0.s"
	@echo "... chapter03/3-2.o"
	@echo "... chapter03/3-2.i"
	@echo "... chapter03/3-2.s"
	@echo "... chapter03/3-3.o"
	@echo "... chapter03/3-3.i"
	@echo "... chapter03/3-3.s"
	@echo "... chapter03/3-4.o"
	@echo "... chapter03/3-4.i"
	@echo "... chapter03/3-4.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

