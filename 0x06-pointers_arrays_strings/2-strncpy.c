#include <string.h>
#include "main.h"
/**
 * _strncpy - The func that  will copy with the strncpy()
 *
 * @dest: The pointer to buffer
 * @src: The pointer to source
 * @n: The number of bytes to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
