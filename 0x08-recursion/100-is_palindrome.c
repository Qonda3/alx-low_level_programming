/**
 * _strlen_recursion - length of a string.
 * @s: string.
 * Return: number of length.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - checks is string is palindrome.
 * @s: input string.
 * @n: first index number.
 * @m: last index number.
 * Return: (1) if a string palindrome else (0).
 */
int palindrome(char *s, int n, int m)
{
	if (s[n] != s[m])
		return (0);
	if (n == m || n > m)
		return (1);
	return (palindrome(s, n + 1, m - 1));
}
/**
 * is_palindrome - palindrome.
 * @s: input string.
 * Return: 1 if a string palindrome else (0).
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (palindrome(s, 0, len - 1));
}
