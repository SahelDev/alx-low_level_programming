/**
 * _memset - fills the first n bytes of memory area pointed to by
 * @s: P1
 * @b: P2
 * @n: P3
 *Return: a pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 1;

	while (i <= n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}
