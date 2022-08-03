#include "function_pointers.h"
/**
 * print_name -  the function to call my_name functin
 * @name: the name to be printed
 * @f: the pointe to the funtion my_name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	(*f)(name);
}
