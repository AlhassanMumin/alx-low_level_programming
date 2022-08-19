/**
 * set_bit - the function to set bit
 * @n: the pointer to the integer to set a bit
 * @index: the index to set the bit
 * Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (-1);
}
