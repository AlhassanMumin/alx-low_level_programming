#include "main.h"
/**
 * print_alphabet_x10 ->prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int counter = 0;

	while (counter < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		counter = counter + 1;

	 	_putchar('\n');
	}

}
