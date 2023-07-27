#include "main.h"
/**
 * reverse_array - reverse the content of array of integers
 * @a: parameter it takes
 * @n: parameter it takes
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	j = (n - 1);
	i = 0;
	while (i < (n / 2))
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
