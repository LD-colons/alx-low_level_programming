#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: parameter it takes
 * @src: parameter it takes
 * @n:parameter it takes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
