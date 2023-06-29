rm -r build
mkdir build
cd .\build
cmake ..
cmake --build .

cd ../..

Configure, generate and build CMake project of different complexities.


**ExeA**
Consists only of a single `main.cpp`.
 
**ExeB**
Cointains a header and source file in an `include` and a `src` directory respectively.

**ExeC**
Contains a header-only libary as a second built target.

```
ExeC
└──LibA
```

**ExeD**
Contains a header and source file libary with `include` and `src` directories as a second built target.

```
ExeD
└──LibA
```

**ExeE**
Include transitive libraries i.e. mutiple built targets.

```
ExeE
└──LibC
   ├──LibA
   └──LibB
```

**ExeF**
Fetches a header-only library `LibA` from the `dependencies` directory.

```
cmake .. -U DIR_LIBA -D DIR_LIBA=D:/Code/CMake/CMakeExeDependencies/dependencies/LibA
```

**ExeG**
Fetches a library with header and source files `LibB`.

```
cmake .. -U DIR_LIBB -D DIR_LIBB=D:/Code/CMake/CMakeExeDependencies/dependencies/LibB
```

**ExeH**
Fetches transitive libraries `LibC/LibA` and `LibC/LibB`.

```
cmake .. -U DIR_LIBC -D DIR_LIBC=D:/Code/CMake/CMakeExeDependencies/dependencies/LibC
```

**ExeI**
Fetches a transitive libraries `LibD` which itself fetches Libraries `LibA` and `LibB`.

```
cmake .. -U DIR_LIBA -D DIR_LIBA=D:/Code/CMake/CMakeExeDependencies/dependencies/LibA -U DIR_LIBB -D DIR_LIBB=D:/Code/CMake/CMakeExeDependencies/dependencies/LibB -U DIR_LIBD -D DIR_LIBD=D:/Code/CMake/CMakeExeDependencies/dependencies/LibD
```

**ExeJ**
Fetch online repositories with CMake support: GLFW and GLAD

**ExeK**
Fetch online cmake repositories without CMake support: Dear ImGui