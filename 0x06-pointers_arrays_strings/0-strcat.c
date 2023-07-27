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

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	return (dest);
}
