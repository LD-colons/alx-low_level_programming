#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: charater to checked
 * Return: 1 for uppercase letter otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' &&c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
