#include "main.h"
/**
 * *_memset - fills the memory with constant byte
 * @s: memory to be filled
 * @b: constant byte fills in
 * @n: number that fills to
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n * sizeof(b); i++)
	{
		s[i] = b;
	}
	return (s);
}
