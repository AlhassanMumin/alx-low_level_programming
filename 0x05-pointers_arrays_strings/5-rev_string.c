#include <string.h>
#include "main.h"
/**
 * rev_string - The func that will reverse the string
 *
 * @s: The point which  value is to be printed
 */
void rev_string(char *s)
{
	int len, i, temp_val;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp_val = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp_val;
	}
}
