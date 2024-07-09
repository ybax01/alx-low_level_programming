
/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: src
 * @n: Number of bytes
 * Return: pointer to area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *ptr2 = src;

	while (n-- > 0)
	{
		*ptr++ = *ptr2++;
	}
	return (dest);
}
