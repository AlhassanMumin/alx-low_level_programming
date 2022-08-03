#include "function_pointers.h"
#include <stdio.h>
void my_name(char *);
/**
 * print_name -  the function to call my_name functin
 * @name: the name to be printed
 * @(*f): the pointe to the funtion my_name
 */
void print_name(char *name, void (*f)(char *))
{
	f = my_name;
	(*f)(name);
}
/**
 * my_name - the function to pirnt  the name
 * @str: the pointer to the character  string
 */
void my_name(char *str)
{
	int i;
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
}
