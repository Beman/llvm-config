# llvm-config
LLVM configuration files such as `.clang-format` and `.clang-tidy`

One way to use clang-format with this repository is to clone it to a convenient location
on your development system and then put a symlink .clang-format ->
llvm-config/.clang-config in a known parent directory (such as C:\ on Windows or
/usr/your-home on Linux).

## Windows Instalation Example ##  

```
c:
cd \bgd
git clone git@github.com:Beman/llvm-config.git
cd \
mklink .clang-format \bgd\llvm-config\.clang-format

```
## Windows Use Examples ##

On Windows option arguments are not delimited with quote marks. 

### Clang-format ###

```
clang-format -style=file test.cpp >output.cpp
```

### Clang-tidy ###

```
clang-tidy -list-checks -checks=* | grep readability
    google-readability-braces-around-statements
    google-readability-casting
    google-readability-function-size
    google-readability-namespace-comments
    google-readability-todo
    readability-avoid-const-params-in-decls
    readability-braces-around-statements
    readability-container-size-empty
    readability-delete-null-pointer
    readability-deleted-default
    readability-else-after-return
    readability-function-size
    readability-identifier-naming
    readability-implicit-bool-conversion
    readability-inconsistent-declaration-parameter-name
    readability-misleading-indentation
    readability-misplaced-array-index
    readability-named-parameter
    readability-non-const-parameter
    readability-redundant-control-flow
    readability-redundant-declaration
    readability-redundant-function-ptr-dereference
    readability-redundant-member-init
    readability-redundant-smartptr-get
    readability-redundant-string-cstr
    readability-redundant-string-init
    readability-simplify-boolean-expr
    readability-simplify-subscript-expr
    readability-static-accessed-through-instance
    readability-static-definition-in-anonymous-namespace
    readability-string-compare
    readability-uniqueptr-delete-release
    
clang-tidy -checks=readability-braces-around-statements -fix test.cpp -- -I/boost/develop -std=c++11
```
