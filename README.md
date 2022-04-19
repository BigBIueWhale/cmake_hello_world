# cmake_hello_world
Getting started with CMake can be hard.
\
The defaults are working against us.
\
My hello_world CMake configuration reverses the following defaults:
* The default behaviour of MinGW GCC, and MSVC is to dynamically link to the C and C++ runtime libraries, that causes portability issues on Windows.
* The default behaviour of CMake with GCC and MinGW is to use the compiler flag: -std=gnu++14 instead of -std=c++14.
* The default behaviour of Visual Studio with CMake is not to use a Unicode build.

Other various useful flags are commented-out.
\
This repo provides a basic configuration for building a hello-world executable. Who knew that it could be this complicated?
\
Supported OSs: Windows and Linux
\
Supported compilers: MSVC, GCC, MinGW GCC, or clang.
\
Supported IDEs: CLion, Visual Studio, and VS Code.
\
Supported CMake version: 3.21
