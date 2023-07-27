#include "main.h"
/**
 * reverse_array - reverse the content of array of integers
 * @a: parameter it takes
 * @n: parameter it takes
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i <= n)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i--;
	}
	_putchar('\n');
}
