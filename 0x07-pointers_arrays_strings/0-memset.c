#include <string.h>
/**
 * _memset - it will fill first n bytes of memory
 *
 * @s: pointer to the memory to be filled
 * @b: the constant that will fill the memory
 * @n:
 * the size of memory to be filled
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
