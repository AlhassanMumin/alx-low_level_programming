/**
 * clear_bit - the function to clear a bit
 * @n: pointter to the integer
 * @index: the index at where to clear
 * Return: 1 on success or -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
