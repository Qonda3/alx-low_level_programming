/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to a character.
 * @accept: a pointer to a character.
 * Return: integer variable
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
	}
	return (count);
}
