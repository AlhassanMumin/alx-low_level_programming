#include <string.h>
/**
 * leet - it will encode the string
 * @p: the string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *p)
{
	int i, len;

	len = strlen(p);
	for (i = 0; i < len; i++)
	{
		if (p[i] == 'a' || p[i] == 'A')
		{
			p[i] = 4 + '0';
		}
		else if (p[i] == 'e' || p[i] == 'E')
		{
			p[i] = 3 + '0';
		}
		else if (p[i] == 'o' || p[i] == 'O')
		{
			p[i] = 0 + '0';
		}
		else if (p[i] == 't' || p[i] == 'T')
		{
			p[i] = 7 + '0';
		}
		else if (p[i] == 'l' || p[i] == 'L')
		{
			p[i] = 1 + '0';
		}
	}
	return (p);
}
