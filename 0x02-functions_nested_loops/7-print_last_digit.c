#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * @n: the number those last digit is evaluated
 * Return: the digit
 */
int print_last_digit(int n)
{
	int ldigit;

	ldigit = n % 10;

	if (ldigit < 0)
	{
		_putchar(ldigit * -1);
		return (ldigit);
	}
	else
	{
		_putchar(ldigit);
		return (ldigit);
	}
	_putchar('\n');
}
