/**
 * _strcat - concatenates two strings
 * @dest: a pointer to an character
 * @src: a pointer to an character
 * Return: dest 
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count = 0;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[count] = src[j];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
