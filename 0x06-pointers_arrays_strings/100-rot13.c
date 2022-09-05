#include <ctype.h>
#include <string.h>
/**
 * rot13 - it will encode string using rot13
 * @s: the string that will be encoded
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int  index, i = 0;
	char all_alpha[52] = {'A','B','C','D','E','F','G','H','I','J',
			      'K','L','M','N','O','P','Q','R','S','T',
			      'U','V','W','X','Y','Z','a','b','c','d',
			      'e','f','g','h','i','j','k','l','m','n',
			      'o','p','q','r','s','t','u','v','w','x',
			      'y','z'};
	char rot13_key[52] = {'N','O','P','Q','R','S','T','U','V','W',
			      'X','Y','Z','A','B','C','D','E','F','G',
			      'H','I','J','K','L','M','n','o','p','q',
			      'r','s','t','u','v','w','x','y','z','a',
			      'b','c','d','e','f','g','h','i','j','k',
			      'l','m'};

	while (s[i])
	{
		for (index = 0; index < 52; index++)
		{
			if (s[i] == all_alpha[index])
				s[i] = rot13_key[index];
		}
		i++;
	}

	return (s);
}
