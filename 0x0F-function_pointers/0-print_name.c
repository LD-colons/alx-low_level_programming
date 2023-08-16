#include "fuction_pointer.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name: pointer argument
 * @f: function to pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
