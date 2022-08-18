#include <stdlib.h>
/**
 * binary_to_uint - the function to convert binary to decimal
 * @b: a pointer to the stirng of characters
 * Return: the converted characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, mul = 1;
	int len, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		len += 1;
		i++;
	}
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		dec += (b[len] - '0') * mul;
		mul *= 2;
	}
	return (dec);
}
