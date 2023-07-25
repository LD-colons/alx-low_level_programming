#include "main.h"
/**
 * rev_string - reverse a string
 * @s: parameter it takes
 * Return: Always 0
 */
void rev_string(char *s)
{
	int count = 0;
	int rev;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (rev = count; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
