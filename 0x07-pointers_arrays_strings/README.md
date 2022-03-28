## Files
- **0-memset.c** - filss memory with a constant byte
    > * The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    > - Returns a pointer to the memory area `s`
- **1-memcpy.c** - copies memory area
    > `_memcpy()` copies `n` bytes from memory area `src` to memory area `dest`
- **2-strchr.c** - locates a character in a string, returns a pointer to the first occurence of the character `c` in the string `s`, or `NULL` if the character is not found
- **3-strspn.c** - gets the length of a prefix substring, returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
- **4-strpbrk.c** - searches a string for any of a set of bytes.
    > The `_strpbrk()` function locates the first occurence in the string `s` of any bytes in the string `accept`
- **5-strstr.c** - locates a substring
    > - `_strstr()` function finds the first occurence of the substring `needle` in the string `haystack
    > * Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found
- **7-print_chessboard.c** - prints the chessboard
- **8-print_diagsums.c** - prints the sum of the two diagnols of a square matrix of integers
- **100-set_string.c** - sets the value of a pointer to a char
- **101-crackme_password** - contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable
    > * Your file should contain the exact password, no new line, no extra space
    > - `ltrace`, `ldd`, `gdb` and `objdump` can help
    > * You may need to install the `openssl` library to run the crakme2 program: `sudo apt install libssl-dev`
    > - Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`
