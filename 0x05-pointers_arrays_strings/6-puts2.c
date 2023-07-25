#include "main.h"
/**
 * puts2 - prints every other character of string
 * starting with the first character
 * @str: parameter it takes
 * Return: Always 0
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
