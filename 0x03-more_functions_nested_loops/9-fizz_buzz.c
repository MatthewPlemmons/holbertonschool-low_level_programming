#include <stdio.h>

/**
 * main - prints 1-100, replacing multiples of 3 and 5 with Fizz and Buzz.
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%i ", i);
		i++;
	}
	printf("\n");
	return (0);
}
