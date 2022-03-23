## Files
* **0-strcat** - concatenates two strings
    > * This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
    > - Returns a pointer to the resulting string `dest`
* **1-strncat.c** - concatenates two strings
    > * similar to the first function only that
    >
    >> - it will use `n` bytes from src
    >> - `src` does not need to be null-terminated if it contains n or more bytes
    > - Return a null pointer to the resulting string `dest`
* **2-strncpy.c** - function that copies a string
    > Your function should work exactly like `strncpy`
* **3-strcmp.c** - compares two stings
    > Your function should work exactly like `strcmp`
* **4-rev_array.c** - reverses the content of an array of integers
    > `n` is the number of elements of an array
* **5-string_toupper.c** - changes all lowecase letters of a string to uppercase
* **6-cap_string.c** - capitalizes all words of a string
    > Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{` and `}`
* **7-leet.c** - encodes a string into 1337
    > * Letters `a` and `A` should be replaced by` 4`
    > - Letters `e` and `E` should be replaced by `3`
    > * Letters `o` and `O` should be replaced by `0`
    > - Letters `t` and `T` should be replaced by `7`
    > * Letters `l` and `L` should be replaced by `1`
    > - Not allowed to `switch` or use ternary operation
    > * Only use one `if` and two loops in your code
* **100-rot13.c** - encodes a string using rot13
* **101-print_number.c** - prints an integer
* **102-magic.c** - add one line to the code so that the program prints `a[2] = 98` followed by a new line
* **103-infinite_add.c** - adds two numbers
* **104-print_buffer.c** - prints a buffer
