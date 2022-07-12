#include <string.h>
#include "main.h"
/**
 * *_strcpy - It copies a string pointd to by scr to a buffer
 * pointed to by dest
 * @src: The pointer to string
 * @dest: The pointer to buffer
 * Return: The pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

