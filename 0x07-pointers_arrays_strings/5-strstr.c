/**
 * _strstr - locates a substring
 * @haystack: a pointer to the string in which the search will be performed
 * @needle: a pointer to the null-terminated substring.
 * Return: a pointer to the first occurrence else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int count = 0;
	int j, match;

	while (needle[i] != '\0')
	{
		count++;
		i++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			match = 0;
			while (needle[j] == haystack[i])
			{
				match++;
				if (match == count)
				{
					count -= 1;
					return (&(haystack[i - count]));
				}
				j++;
				i++;
			}
		}
	}
	return ('\0');
}
