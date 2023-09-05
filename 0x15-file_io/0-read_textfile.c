#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text.
 * @filename: file name
 * @letters: letters to be read
 * Return: number of bytes read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t filedir;
	ssize_t w;
	ssize_t text;

	filedir = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	text = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(filedir);
	return (w);
}

