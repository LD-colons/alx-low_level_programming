#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: parameter it takes
 * @src: parameter it takes
 * @n: parameter it takes
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n /*&& src[i] != '\0'*/; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}