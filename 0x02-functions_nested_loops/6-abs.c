#include "main.h"
/**
 * _abs - prints the absolute value of the number
 *@n: the number whose absolute value is found
 * Return: positive or 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
