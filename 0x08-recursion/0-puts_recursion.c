#include "main.h"
/**
 * _puts_recursion - prints string followed by newline
 * @s: string parameter
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(s[i]);
	}
	else
	{
		_putchar(s[i]);
		i = i + 1;
		_puts_recursion(s[i]);
	}
}
