## How to build

```bash
cmake --build . --clean-first
make
```

## How to run

```bash
./c-review
```

## CLion ClangFormat Auto Save

References: https://blog.csdn.net/terence_10years/article/details/102646054.

### 1. Install the clang-format:

```bash
brew install clang-format
```

### 2. Install the CLion plugin [ClangFormat](https://plugins.jetbrains.com/plugin/13359-clangformat).

Configure: Go to the `Preferences - Editor - Code Style`, then click the `Enable ClangFormat`.

### 3. Install the CLion plugin [File Watchers](https://www.jetbrains.com/help/clion/using-file-watchers.html)

Configure:

- Go to the `Preferences - Tools - File Watchers`.
- Create a custom template, enter `name` with `CLang Format`, choose the `File type` as `C/C++`, select scope
  with `Current File`, and enter the `Program` with `clang-format`.
- Go to the `Advanced Options`, then click `Auto-save edited files to trigger the watcher`.

### 4. Create `.clang-format` file in project root dir

```
Language: Cpp                                                                                                                                                                                                                                                                             
BasedOnStyle: Google
SortIncludes: CaseInsensitive
```

An easy way to get a valid .clang-format file containing all configuration options of a certain predefined style is:

```
clang-format -style=llvm -dump-config > .clang-format
```

References: https://clang.llvm.org/docs/ClangFormatStyleOptions.html.
