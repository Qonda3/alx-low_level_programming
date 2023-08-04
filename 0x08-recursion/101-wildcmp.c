/**
 * wildcmp - compares two strings
 * @s1: a pointer on a char
 * @s2: a pointer on a char
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	return (0);
}
