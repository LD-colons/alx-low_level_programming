#include "main.h"
/**
 * _islower - checks if the character is in lowercase or not
 * @c:character to be checked
 * Return: 1 for lowercase characters,otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
