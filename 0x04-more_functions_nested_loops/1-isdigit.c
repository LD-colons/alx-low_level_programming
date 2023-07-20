#include "main.h"
/**
 * _isdigit - checks digit 0 through 9
 * @c: value to be checked
 * Return: 1 if it digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
