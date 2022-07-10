#include <string.h>
#include <unistd.h>
/**
 * main - displays the stderr message
 *
 * Return: 1
 */
int main(void){
	char str[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int size = strlen(str);

	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19;\n", size);

	return (1);
}
