/**
 * _strcmp - compare two strings
 * @s1: a pointer on character
 * @s2: a pointer
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	if (s1 == s2)
	{
		return (0);
	}
	while (s1[i] == s2[i])
	{
		i++;
	}
	res = s1[i] - s2[i];

	return (res);
}
