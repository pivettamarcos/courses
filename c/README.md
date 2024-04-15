- Compile with debug information

`gcc -o two_sum two_sum.c -g`

- Debug with gdb
    - `gdb ./main.c`
    - `lay next` then enter
    - Misc commands
        `p`, `x/nx`, `break`, `run`

- Compile for windows
    - `x86_64-w64-mingw32-g++ -o two_sum.exe two_sum.c`