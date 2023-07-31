/**
 * _strchr - locates a character in a string
 * @s: a pointer to a null terminated string
 * @c: a character that we want to find
 * Return: a pointer to the first occurrence of the char 'c' else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if  (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	s = 0;
	return (s);
}
