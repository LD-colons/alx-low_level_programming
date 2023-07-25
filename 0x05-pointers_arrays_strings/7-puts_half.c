#include "main.h"
/**
 * puts_half - print half of string
 * @str: parameter it takes
 * Return: Always 0
 */
void puts_half(char *str)
{
	int count = 0;
	int a;
	int n;

	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}
	if ((count % 2) == 1)
	{
		n = ((count + 1) / 2);
	}
	else
	{
		n = (count / 2);
	}
	for (a = n ; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
