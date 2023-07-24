#include "main.h"
/**
 * _puts - function print string followed by new line
 * @str: pointer as parameter
 * Return: Always success
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
