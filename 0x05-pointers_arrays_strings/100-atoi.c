{
	unsigned int val = 0;
	int k = 1;
	

	do {
		if (*s == '-')
		{
			k*= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			val = (val * 10) + (*s - '0');
		}
		else if (val > 0)
		{
			break;
		}
	} while (*s++);

	return (val * k);
}
