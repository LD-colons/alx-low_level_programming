#include "main.h"
/**
 * _puts - function print string followed by new line
 * @str: pointer as parameter
 * Return: Always success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
