#include <string.h>
/**
 * _strstr - the function to search for a substring
 * @haystack: the main string in which we will search
 * the substring
 * @needle: the piece of string that will be searched for
 * Return: pointer to the beginning of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
