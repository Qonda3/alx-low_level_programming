/**
 * leet - encodes a string
 * @wrd: a pointer
 * Return: character
 */
char *leet(char *wrd)
{
	int i, j, count;
	char sub[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char encd[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	
	for (i = 0; wrd[i] != '\0'; i++)
	{
		count++;
		for (j = 0; j <= 10; j++)
		{
			if (wrd[i] == sub[j])
			{
				wrd[i] = encd[j];
			}
		}
	}
	wrd[count - 1] = '\n';
	wrd[count] = '\0';
	return (wrd);
}
