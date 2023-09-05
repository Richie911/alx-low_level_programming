#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file name
 * @text_content: string
 *
 * Return: 1 for success and -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int filedir, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filedir = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filedir, text_content, len);

	if (filedir == -1 || w == -1)
		return (-1);

	close(filedir);

	return (1);
}

