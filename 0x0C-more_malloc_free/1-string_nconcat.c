#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, leni = 0, lenj = 0;

	while (s1 && s1[leni])
		leni++;
	while (s2 && s2[lenj])
		lenj++;

	if (n < lenj)
		s = malloc(sizeof(char) * (leni + n + 1));
	else
		s = malloc(sizeof(char) * (leni + lenj + 1));

	if (!s)
		return (NULL);

	while (i < leni)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lenj && i < (leni + n))
		s[i++] = s2[j++];

	while (n >= lenj && i < (leni + lenj))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

