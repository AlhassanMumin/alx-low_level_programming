#include "main.h"
#include <string.h>
/**
 * _strcat - A func that will concatenate a string
 * @src: A pointer to source s2
 * @dest: A pointe to s2
 * @Return: The string to be returned
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
