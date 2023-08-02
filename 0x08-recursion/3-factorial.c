#include "main.h"
/**
 * factorial - find factorial of the number
 * @n: factorial of the number to find
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

