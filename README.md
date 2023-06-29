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