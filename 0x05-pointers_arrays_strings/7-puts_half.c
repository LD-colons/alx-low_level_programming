#include "main.h"
/**
 * puts_half - print half of string
 * @str: parameter it takes
 * Return: Always 0
 */
void puts_half(char *str)
{
	int count;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	int i;

	if ((count % 2) == 0)
	{
		i = count + 2;
	}
	else
	{
		i = count + 1;
	}
	int j;

	for (j = i / 2; j <= count; j++)
	{
		_putchar(*(str + j));
		str++;
	}
	_putchar('\n');
}
