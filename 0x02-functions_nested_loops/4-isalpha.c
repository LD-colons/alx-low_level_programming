#include "main.h"
/**
 * _isalpha - checks whether it english alphabet
 * @c: character to be checked
 * Return: 1 if it is alphabet,otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
