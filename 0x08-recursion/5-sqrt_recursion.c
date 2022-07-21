/**
 * _sqrt_recursion - it will check for a number with natural square root
 * @n: the number to check
 * Return: the sqare root value
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		if (i * i == n)
		{ 
			i = i;
		}
		else
		{
			i = -1;
		}
	}
return (i);
}
