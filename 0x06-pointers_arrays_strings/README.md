## Files
* **0-strcat** - concatenates two strings
    > * This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
    > - Returns a pointer to the resulting string `dest`
* **1-strncat.c** - concatenates two strings
    > * similar to the first function only that:
        >> - it will use `n` bytes from src
	>> * `src` does not need to be null-terminated if it contains n or more bytes
    > - Return a null pointer to the resulting string `dest`
