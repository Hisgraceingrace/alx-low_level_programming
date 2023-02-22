#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 upto 1024
 * Return: always (success)
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
