#include <ctype.h>
#include <string.h>
/**
 * cap_string - this function witll capitalize a string
 * @ptr: the pointer to the string to be capitalize
 * Return: the pointer to ptr
 */
char *cap_string(char *ptr)
{
	int len, i;

	len = strlen(ptr);
	if (isalpha(ptr[0]))
	{
		ptr[0] = toupper(ptr[0]);
	}
	for (i = 1; i < len; i++)
	{
		if(isalpha(ptr[i]) && (ptr[i - 1] == ' ' || ptr[i - 1] == '.'
		|| ptr[i - 1] == '\t' || ptr[i -1 ] == '\n'))
		{
			ptr[i] = toupper(ptr[i]);
		}
	}
	return (ptr);
}
