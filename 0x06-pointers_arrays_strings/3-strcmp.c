#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: parameter it takes
 * @s2: parameter it takes
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (flag);
}


