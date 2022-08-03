int  int_index(int *array, int size, int (*cmp)(int))
{
	int  i, val, index;
	
	if (size <= 0)
		return (-1);
	index = -1;
	for (i = 0; i < size; i++)
	{
		val = (*cmp)(array[i]);
		if (val == 1)
		{
			index = i;
			return (index);
		}
	}
	return (index);
}
