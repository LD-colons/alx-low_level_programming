#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: the number to be checked
 * Return: 1 for positive number, 0 for zero and -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}

