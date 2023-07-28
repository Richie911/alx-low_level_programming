/**
 * _strncat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
