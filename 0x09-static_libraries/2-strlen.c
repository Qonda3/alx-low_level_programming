/**
 * _strlen - length of a string
 * @s: a pointer the string we want to return the length
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
