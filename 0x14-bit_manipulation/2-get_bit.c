/**
 * git_bit - the functionto get the bit at an index
 * @n: the value to be converteed to some bit values
 * @index: the index to search for
 * Return: the value at that index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
