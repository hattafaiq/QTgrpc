# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/faiqhatta/Documents/grpc/examples/cpp/route_guide

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/faiqhatta/Documents/grpc/examples/cpp/route_guide

# Include any dependencies generated for this target.
include CMakeFiles/rg_grpc_proto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rg_grpc_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rg_grpc_proto.dir/flags.make

route_guide.pb.cc: /home/faiqhatta/Documents/grpc/examples/protos/route_guide.proto
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/faiqhatta/Documents/grpc/examples/cpp/route_guide/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating route_guide.pb.cc, route_guide.pb.h, route_guide.grpc.pb.cc, route_guide.grpc.pb.h"
	/bin/protoc-3.21.12.0 --grpc_out /home/faiqhatta/Documents/grpc/examples/cpp/route_guide --cpp_out /home/faiqhatta/Documents/grpc/examples/cpp/route_guide -I /home/faiqhatta/Documents/grpc/examples/protos --plugin=protoc-gen-grpc="/bin/grpc_cpp_plugin" /home/faiqhatta/Documents/grpc/examples/protos/route_guide.proto

route_guide.pb.h: route_guide.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate route_guide.pb.h

route_guide.grpc.pb.cc: route_guide.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate route_guide.grpc.pb.cc

route_guide.grpc.pb.h: route_guide.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate route_guide.grpc.pb.h

CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o: CMakeFiles/rg_grpc_proto.dir/flags.make
CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o: route_guide.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/faiqhatta/Documents/grpc/examples/cpp/route_guide/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o -c /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.grpc.pb.cc

CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.grpc.pb.cc > CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.i

CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.grpc.pb.cc -o CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.s

CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o: CMakeFiles/rg_grpc_proto.dir/flags.make
CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o: route_guide.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/faiqhatta/Documents/grpc/examples/cpp/route_guide/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o -c /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.pb.cc

CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.pb.cc > CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.i

CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/route_guide.pb.cc -o CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.s

# Object files for target rg_grpc_proto
rg_grpc_proto_OBJECTS = \
"CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o" \
"CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o"

# External object files for target rg_grpc_proto
rg_grpc_proto_EXTERNAL_OBJECTS =

librg_grpc_proto.a: CMakeFiles/rg_grpc_proto.dir/route_guide.grpc.pb.cc.o
librg_grpc_proto.a: CMakeFiles/rg_grpc_proto.dir/route_guide.pb.cc.o
librg_grpc_proto.a: CMakeFiles/rg_grpc_proto.dir/build.make
librg_grpc_proto.a: CMakeFiles/rg_grpc_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/faiqhatta/Documents/grpc/examples/cpp/route_guide/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library librg_grpc_proto.a"
	$(CMAKE_COMMAND) -P CMakeFiles/rg_grpc_proto.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rg_grpc_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rg_grpc_proto.dir/build: librg_grpc_proto.a

.PHONY : CMakeFiles/rg_grpc_proto.dir/build

CMakeFiles/rg_grpc_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rg_grpc_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rg_grpc_proto.dir/clean

CMakeFiles/rg_grpc_proto.dir/depend: route_guide.pb.cc
CMakeFiles/rg_grpc_proto.dir/depend: route_guide.pb.h
CMakeFiles/rg_grpc_proto.dir/depend: route_guide.grpc.pb.cc
CMakeFiles/rg_grpc_proto.dir/depend: route_guide.grpc.pb.h
	cd /home/faiqhatta/Documents/grpc/examples/cpp/route_guide && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/faiqhatta/Documents/grpc/examples/cpp/route_guide /home/faiqhatta/Documents/grpc/examples/cpp/route_guide /home/faiqhatta/Documents/grpc/examples/cpp/route_guide /home/faiqhatta/Documents/grpc/examples/cpp/route_guide /home/faiqhatta/Documents/grpc/examples/cpp/route_guide/CMakeFiles/rg_grpc_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rg_grpc_proto.dir/depend

