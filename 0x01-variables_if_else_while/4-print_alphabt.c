#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char emit_e_q;
	
	for (emit_e_q = 'a'; emit_e_q <= 'z'; emit_e_q++)
	{
		if (emit_e_q == 'e' || emit_e_q == 'q')
		{
		}
		else
		{
			putchar(emit_e_q);
		}
	}
	putchar('\n');

	return (0);
}
