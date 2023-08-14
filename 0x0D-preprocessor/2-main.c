#include "main.h"
/**
 * main - where the program begin
 *
 * Return: Always Success
 */
int main(void)
{
	int i;
	char a[] = __FILE__;

	i = 0;
	while (a[i] != '\0')
	{
	_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
