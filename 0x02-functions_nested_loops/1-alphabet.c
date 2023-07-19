#include "main.h"
void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main('void')
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always 0.
 *
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
