#include "main.h"
/**
* _atoi - it will convert a string to an integer value
* @s: The sting that is to be converted
*Return: An integer value
*/
int _atoi(char *s)
{
	unsigned int val = 0;
	int k = 1;
	

	do {
		if (*s == '-')
		{
			k*= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			val = (val * 10) + (*s - '0');
		}
		else if (val > 0)
		{
			break;
		}
	} while (*s++);

	return (val * k);
}
