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
		ldigit = ldigit * -1;
		_putchar(ldigit);
		_putchar('\n');
		return (ldigit * -1);
	}
	else
	{
		_putchar(ldigit);
		_putchar('\n');
		return (ldigit);
	}
}
