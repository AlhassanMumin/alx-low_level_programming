#include <string.h>
/**
 * _strspn - the function calculate in byte the initial segment of
 * string s
 * @s: the stirng which iniial segment will be calculated
 * @accept: the string which determine how many bytes will be calculated
 * in string s
 * Return: the number of bytes in the initial segment of string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = strspn(s, accept);
	return (byt);
}
