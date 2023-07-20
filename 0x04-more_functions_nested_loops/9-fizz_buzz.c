#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			puts("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			puts("Buzz");
		}
		else if (i % 15 == 0)
		{
			puts("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		puts(" ");
	}
	puts("\n");
	return (0);
}
