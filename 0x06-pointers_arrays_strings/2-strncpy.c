#include <string.h>
#include "main.h"

/**
 * _strncpy - The func that  will copy with the strncpy()
 *
 * @dest: The pointer to buffer
 * @src: The pointer to source
 * @n: The number of bytes to copy
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0, j = 0;
	while (n)
	{
		dest[j] = src[i];
		j++, i++, n--;
	}
	return (dest);
}
