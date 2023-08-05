/**
 * _memcpy - copies memory area
 * @dest: A pointer to the destination memory where the data will be copied
 * @src: A pointer to the source memory from where the data will be copied
 * @n: number of bytes to be copied from the src to the dest
 * Return: copy of src code
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
