/**
 * swap_int - the func that swaps values
 *
 * @a: The a pointer
 * @b:  The b pointer
 */
void swap_int (int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
