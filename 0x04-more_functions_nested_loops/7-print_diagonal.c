#include "main.h"
/**
 * print_diagonal - print \ character
 * @n: number of times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			putchar('\\');
		}
		else
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
