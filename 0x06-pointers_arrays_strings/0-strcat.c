#include "main.h"
/**
 * *_strcat - concatenate two string
 * @dest: parameter it takes
 * @src: parameter it takes
 * Return: Always pointer
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[count + j] = src[j];
	}
	dest[count + j] = '\0';
	return (dest);
}
