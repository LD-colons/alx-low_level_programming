/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: no bytes to copied
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
	{
		dest[i] = src[i];
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
