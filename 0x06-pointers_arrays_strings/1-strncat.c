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
	int count;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (j = 0; j < n; j++)
	{
		dest[count + j] =  src[j];
	}
	dest[count + j] = '\0';
	return (dest);
}
