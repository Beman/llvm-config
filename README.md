# llvm-config
LLVM configuration files such as `.clang-format` and `.clang-tidy`

One way to use clang-format with this repository is to clone it to a convenient location
on your development system and then put a symlink .clang-format ->
llvm-config/.clang-config in a known parent directory (such as C:\ on Windows or
/usr/your-home on Linux).

*Windows Example*  

```
c:
cd \bgd
git clone git@github.com:Beman/llvm-config.git
cd \
mklink .clang-config \bgd\llvm-config\.clang-format
```
