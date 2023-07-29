/**
 * leet - encodes a string
 * @wrd: a pointer
 * Return: character
 */
char *leet(char *wrd)
{
	char sub[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char encd[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0;
	int k;

	while (wrd[i] == '\0')
	{
		k = 0;
		while (k < 4)
		{
			if (wrd[i] == sub[k])
			{
				wrd[i] = encd[k];
				break;
			}
			k++;
		}
		i++;
	}
	return (wrd);
}
