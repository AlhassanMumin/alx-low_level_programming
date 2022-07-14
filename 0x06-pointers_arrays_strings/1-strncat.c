#include <string.h>
#include "main.h"
/**
 * _strncat - a func that concatenate two strings with strncat()
 *
 * @dest: The pointer to the string that will be copied to
 * @src: The pointer to the sring to be copied
 * @n: The number of characters to copy
 * Return: It will return pointer to dest
 */
 char *_strncat(char *dest, char *src, int n)
{
	 return (strncat(dest, src, n));
}
