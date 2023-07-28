/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: bytes to be copied
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (stc[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i]
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
