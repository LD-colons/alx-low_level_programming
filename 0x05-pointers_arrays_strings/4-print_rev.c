#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer as parmeter
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;
	int rev;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (rev = count; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
