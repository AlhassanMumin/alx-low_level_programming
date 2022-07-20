/**
 * _strlen_recursion - it will return the length of the string
 * @s: the pointer to the string
 * Return: the length of the string to be returned
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return 0;
	}
	if (*s)
	{
		_strlen_recursion(s + 1);
		len = len + 1;
	}
	return (len);
}
