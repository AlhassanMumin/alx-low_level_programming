#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "hello world";
	char *f = "heleq";
	char  *n;

	n =  _strpbrk(s, f);
	printf("%s\n",n);

	return 0;
}
