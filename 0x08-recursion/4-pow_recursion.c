/**
 * _pow_recursion - it raises a number to some power
 * @x: the base number
 * @y: the exponent
 * Return: the result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

