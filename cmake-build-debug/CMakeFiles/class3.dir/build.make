# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/class3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/class3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/class3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class3.dir/flags.make

CMakeFiles/class3.dir/generator.cpp.obj: CMakeFiles/class3.dir/flags.make
CMakeFiles/class3.dir/generator.cpp.obj: CMakeFiles/class3.dir/includes_CXX.rsp
CMakeFiles/class3.dir/generator.cpp.obj: ../generator.cpp
CMakeFiles/class3.dir/generator.cpp.obj: CMakeFiles/class3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class3.dir/generator.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/class3.dir/generator.cpp.obj -MF CMakeFiles\class3.dir\generator.cpp.obj.d -o CMakeFiles\class3.dir\generator.cpp.obj -c "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\generator.cpp"

CMakeFiles/class3.dir/generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class3.dir/generator.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\generator.cpp" > CMakeFiles\class3.dir\generator.cpp.i

CMakeFiles/class3.dir/generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class3.dir/generator.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\generator.cpp" -o CMakeFiles\class3.dir\generator.cpp.s

# Object files for target class3
class3_OBJECTS = \
"CMakeFiles/class3.dir/generator.cpp.obj"

# External object files for target class3
class3_EXTERNAL_OBJECTS =

class3.exe: CMakeFiles/class3.dir/generator.cpp.obj
class3.exe: CMakeFiles/class3.dir/build.make
class3.exe: /glut/glut32.lib
class3.exe: CMakeFiles/class3.dir/linklibs.rsp
class3.exe: CMakeFiles/class3.dir/objects1.rsp
class3.exe: CMakeFiles/class3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\class3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class3.dir/build: class3.exe
.PHONY : CMakeFiles/class3.dir/build

CMakeFiles/class3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\class3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/class3.dir/clean

CMakeFiles/class3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto" "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto" "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug" "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug" "C:\Users\jotem\Desktop\Universidade\3 Ano\Segundo semestre\CG\projeto\cmake-build-debug\CMakeFiles\class3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/class3.dir/depend

