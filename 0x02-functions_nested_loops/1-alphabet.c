#include "main.h"
/**
 * print_aphabet - print all alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
