# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Star_cube.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Star_cube.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Star_cube.dir/flags.make

CMakeFiles/Star_cube.dir/Functions.cpp.o: CMakeFiles/Star_cube.dir/flags.make
CMakeFiles/Star_cube.dir/Functions.cpp.o: ../Functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Star_cube.dir/Functions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Star_cube.dir/Functions.cpp.o -c "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/Functions.cpp"

CMakeFiles/Star_cube.dir/Functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Star_cube.dir/Functions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/Functions.cpp" > CMakeFiles/Star_cube.dir/Functions.cpp.i

CMakeFiles/Star_cube.dir/Functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Star_cube.dir/Functions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/Functions.cpp" -o CMakeFiles/Star_cube.dir/Functions.cpp.s

CMakeFiles/Star_cube.dir/Functions.cpp.o.requires:

.PHONY : CMakeFiles/Star_cube.dir/Functions.cpp.o.requires

CMakeFiles/Star_cube.dir/Functions.cpp.o.provides: CMakeFiles/Star_cube.dir/Functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/Star_cube.dir/build.make CMakeFiles/Star_cube.dir/Functions.cpp.o.provides.build
.PHONY : CMakeFiles/Star_cube.dir/Functions.cpp.o.provides

CMakeFiles/Star_cube.dir/Functions.cpp.o.provides.build: CMakeFiles/Star_cube.dir/Functions.cpp.o


CMakeFiles/Star_cube.dir/main.cpp.o: CMakeFiles/Star_cube.dir/flags.make
CMakeFiles/Star_cube.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Star_cube.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Star_cube.dir/main.cpp.o -c "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/main.cpp"

CMakeFiles/Star_cube.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Star_cube.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/main.cpp" > CMakeFiles/Star_cube.dir/main.cpp.i

CMakeFiles/Star_cube.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Star_cube.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/main.cpp" -o CMakeFiles/Star_cube.dir/main.cpp.s

CMakeFiles/Star_cube.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Star_cube.dir/main.cpp.o.requires

CMakeFiles/Star_cube.dir/main.cpp.o.provides: CMakeFiles/Star_cube.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Star_cube.dir/build.make CMakeFiles/Star_cube.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Star_cube.dir/main.cpp.o.provides

CMakeFiles/Star_cube.dir/main.cpp.o.provides.build: CMakeFiles/Star_cube.dir/main.cpp.o


# Object files for target Star_cube
Star_cube_OBJECTS = \
"CMakeFiles/Star_cube.dir/Functions.cpp.o" \
"CMakeFiles/Star_cube.dir/main.cpp.o"

# External object files for target Star_cube
Star_cube_EXTERNAL_OBJECTS =

Star_cube: CMakeFiles/Star_cube.dir/Functions.cpp.o
Star_cube: CMakeFiles/Star_cube.dir/main.cpp.o
Star_cube: CMakeFiles/Star_cube.dir/build.make
Star_cube: CMakeFiles/Star_cube.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Star_cube"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Star_cube.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Star_cube.dir/build: Star_cube

.PHONY : CMakeFiles/Star_cube.dir/build

CMakeFiles/Star_cube.dir/requires: CMakeFiles/Star_cube.dir/Functions.cpp.o.requires
CMakeFiles/Star_cube.dir/requires: CMakeFiles/Star_cube.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Star_cube.dir/requires

CMakeFiles/Star_cube.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Star_cube.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Star_cube.dir/clean

CMakeFiles/Star_cube.dir/depend:
	cd "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube" "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube" "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug" "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug" "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/cmake-build-debug/CMakeFiles/Star_cube.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Star_cube.dir/depend

