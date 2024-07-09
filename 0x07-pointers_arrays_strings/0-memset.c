
/**
 * _memset - Fills memory with a constant byte.
 * @s: Area
 * @b: constant byte
 * @n: Number of bytes
 * Return: pointer to area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr = b;
		ptr++;
	}
	return s;
}
