/**
 * _strlen_recursion - length of a string
 * @s: a pointer to a character
 * Return: integer variable
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	len = _strlen_recursion(s + 1);
	return (1 + len);
}
