#include <ctype.h>
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char lc[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (isalpha(lc[j]) && (str[i] == lc[j] || str[i] - 32 == lc[j]))
			{
				str[i] = j + '0';
			}
		}

		 i++;
	}

	return (str);
}
