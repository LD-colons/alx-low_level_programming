#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 *
 * followed by new line
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
