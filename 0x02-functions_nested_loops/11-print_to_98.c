#include <stdio.h> 
/**
 * print_to_98 - It will print from the number
 * 		 to 98
 * @num: The number at which counting starts from
 */
void print_to_98(int num)
{
	printf(" ");

	if (num >= 98)
	{
		while (num > 98)
		{
			num = num - 1;
			printf("%d", num);
		}
	}
	else if (num < 98)
	{
		while (num <= 98)
		{
			num = num + 1;
			printf("%d", num);
		}
	}
	printf("\n");
}

