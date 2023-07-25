#include "main.h"
/**
 * puts2 - prints every other character of string
 * starting with the first character
 * @str: parameter it takes
 * Return: Always 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str + 2;
	}
	_putchar('\n');
}
