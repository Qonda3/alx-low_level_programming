/**
 * _isupper(int c) - checks for upper character
 * @c: integer
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	int i = 65;
	int result = 0;

	while (i <= 90)
	{
		if (i == c)
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
