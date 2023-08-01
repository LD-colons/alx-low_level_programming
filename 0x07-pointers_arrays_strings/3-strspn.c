#include "main.h"
/**
 * _strspn - get the length of prefix substring
 * @s: where the prefix found to
 * @accept: prefix to found
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!(accept[j]))
		{
			return (count);
		}
	}
	return (count);
}
