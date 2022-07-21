/**
 * sqrt_func - it returns to the caller function
 * @a: the argument which square root to be determined
 * @b: the base case
 * Return: it will return result to  the caller
 */
int sqrt_func(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_func(a, b + 1));
}
/**
 * _sqrt_recursion - it will check for a number with natural square root
 * @n: the number to check
 * Return: the sqare root value
 */
int _sqrt_recursion(int n)
{
return (sqrt_func(n, 0));
}
