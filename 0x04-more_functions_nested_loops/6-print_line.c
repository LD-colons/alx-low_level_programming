#include "main.h"
/**
 * print_line - print _ character
 * @n: number of time _ printed
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
