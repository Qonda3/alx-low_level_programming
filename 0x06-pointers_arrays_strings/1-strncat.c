/**
 * _strncat - concatenates two string
 * @dest: a pointer on a character
 * @src: a pointer on a character
 * @n: integer variable
 * Return: dest (string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;

	for (j = 0; src[j] != src[n]; j++)
	{
		dest[count] = src[j];
		count++;
	}
	return (dest);
}
