#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
