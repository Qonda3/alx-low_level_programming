/**
 * _strcmp - compare two strings
 * @s1: a pointer on character
 * @s2: a pointer
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, sum;

	a = s1[0];
	b = s2[0];

	sum = a - b;
	return (sum);
}
