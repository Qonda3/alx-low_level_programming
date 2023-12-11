/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to a character
 * @b: character variable
 * @n: integer variable
 * Return: a pointer to a char (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
