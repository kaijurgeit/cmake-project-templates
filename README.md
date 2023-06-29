# CMake and C++ Project Templates

Hi there! This repository contains 10 basic CMake project templates which you can use as a learning resource or as a starting point for your own projects. Each of the directories prefixed with `Exe` contains a root `CMakeLists.txt` file which generates an executable `ExeA` to `ExeJ` based on a different projects structures. Starting very simple with only one `main.cpp` file to slightly more complex examples that fetch other CMake projects which again depend on other CMake projects.

## Prerequisites

In order to build the projects you need:
- CMake 3.20 or higher
- a C++ compiler
- Python, accessible through CMake (Config, system path)

I tested it using:
- Windows 10
- [CMake 3.27](https://cmake.org/download/)
- [MingGW 13.1.0 Installer](https://github.com/Vuniverse0/mingwInstaller/releases)
- [Python 3.10.10](https://docs.conda.io/en/latest/miniconda.html)
- [VS Code 1.79.2](https://code.visualstudio.com/download)

However, other versions and build tools, such as MSVC should work.

## Usage

Please navigate to the respective CMake project directory, e.g.:

```
cd ./ExeE-incl-transitive-libs
```

Execute the following code in that directory to configure, generate and build the CMake project. 

```
rm -r build
mkdir build
cd .\build
cmake ..
cmake --build .
```
Run the executable, e.g.:
```
./ExeE
```

## Projects

If you want to learn CMake, I recommend going through each project, one by one. Execute the commands above and inspect the CMakeLists.txt and the other files and folders. The projects are made as easy as possible. They are not more complex than necessary to achieve the goal of building simple projects and projects with (external) dependencies. 

**ExeA**

Consists only of a single `main.cpp`.
 
**ExeB**

Contains a header and source file in an `include` and a `src` directory respectively.

**ExeC**

Contains a header-only library as a second built target.

```
ExeC
└──LibA
```

**ExeD**

Contains a header and source file library with `include` and `src` directories as a second built target.

```
ExeD
└──LibB
```

**ExeE**

Include transitive libraries i.e. multiple built targets.
```
ExeE
└──LibC
   ├──LibA
   └──LibB
```

**ExeF**

Fetches a header-only library `LibA` from the `dependencies` directory.
```
ExeF
...
dependencies
└──LibA
```

**ExeG**

Fetches a library with header and source files `LibB`.
```
ExeG
...
dependencies
└──LibB     (fetched)
```

**ExeH**

Fetches transitive libraries `LibC/LibA` and `LibC/LibB`.
```
ExeH
...
dependencies
└──LibC     (fetched)
   ├──LibA  
   └──LibB
```


**ExeI**

Fetches a transitive libraries `LibD` which itself fetches Libraries `LibA` and `LibB`.
```
ExeI
...
dependencies
└──LibC     (fetched)
   ├──LibA  (fetched by LibC)
   └──LibB  (fetched by LibC)
```


**ExeJ**

Fetch online repositories with CMake support: [GLFW](https://github.com/glfw/glfw) and [GLAD](https://github.com/Dav1dde/glad)
```
ExeJ
...
dependencies
├──GLFW  (fetched)
└──GLAD  (fetched)
```