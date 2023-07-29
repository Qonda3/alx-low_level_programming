/**
 * cap_string - capitalizes all words of a string.
 * @wrd: a pointer
 * Return: character
 */
char *cap_string(char *wrd)
{
	int i = 0;
	int k;
	int change = 0;
	char sep[] = {
		' ', '\t', '\n', '.'};

	while (wrd[i] != '\0')
	{
		for (k = 0; k < 4; k++)
		{
			if (wrd[i] == sep[k])
			{
				change = 0;
				i++;
				while (change == 0)
				{
					if (wrd[i] > 'a' && wrd[i] < 'z')
					{
						wrd[i] = wrd[i] - 32;
						change++;
					}
					if (wrd[i] > 'A' && wrd[i] < 'Z')
					{
						change++;
					}
					i++;
				}
			}
		}
		i++;
	}
	return (wrd);
}

