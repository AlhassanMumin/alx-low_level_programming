#include <ctype.h>
#include <string.h>
/**
 * rot13 - it will encode string using rot13
 * @s: the string that will be encoded
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int len, i, temp;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (isalpha(s[i]) && ((s[i] >= 'a' && s[i] <= 'z') ||
		(s[i] >= 'A' && s[i] <= 'Z')))
		{
			temp = s[i + 13];
			while ((s[i] >= 'N' && s[i] <= 'z') ||
			(s[i] >= 'N' && s[i] <= 'Z'))
			{
				temp = s[i - 26];
				break;
			}
			s[i] = temp;
		}
	}
	return (s);
}
