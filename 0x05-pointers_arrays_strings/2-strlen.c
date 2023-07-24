#include "main.h"
#include <string.h>
/**
 * _strlen - print the lenght of string
 * @s: pointer as parameter
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{

		a++;
		s++;
	}
	return (a);
}

