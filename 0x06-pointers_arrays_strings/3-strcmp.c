/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: positive if s1 is greater
 * 	zero if s1 is equal to s2
 * 	negative otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
