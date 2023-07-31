#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates character in string
 * @s: string to be scanned
 * @c: character searhed for
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = i; s[j] != '\0'; j++)
			{
				k = 0;
				s[k] = s[j];
				k++;
			}
			s[k] = '\0';
			return (s);
		}
	}
	return (NULL);
}
