# C++ CMake Project with GitHub Actions

## Idea

This project shows how to build a C++ project using CMake and GitHub Actions.

When code is pushed to the repository, GitHub Actions automatically builds the project.
This helps check that the code compiles correctly.

## Project structure

```
.
├── CMakeLists.txt
├── src
│   └── main.cpp
└── .github
    └── workflows
        └── build.yml
```

## How it works

1. Code is pushed to the repository.
2. GitHub Actions starts a workflow.
3. The workflow installs CMake.
4. CMake configures the project.
5. The project is compiled.

## Build steps

The workflow performs these commands:

```
cmake -S . -B build
cmake --build build
```

## Requirements

* C++17 compiler
* CMake 3.10 or newer

## Goal

The goal of this repository is to demonstrate a simple CI setup for a C++ project.
