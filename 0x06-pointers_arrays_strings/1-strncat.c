#include "main.h"

/**
 * _strncat - function to concatenate pointer strings
 * @dest: Destination string
 * @src: Second string to be appended to dest
 * @n: size of src
 * Return: destination after appending src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
