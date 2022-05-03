#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(fd, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return(w);
}
