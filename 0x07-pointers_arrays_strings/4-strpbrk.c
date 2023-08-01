/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a pointer to the string in which the search will be performed.
 * @accept: a pointer to null-terminated string that contains the set of char to be searched for.
 * Return: a pointer to the first occurence of that char else NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
		}
	}
	return ('\0');
}
