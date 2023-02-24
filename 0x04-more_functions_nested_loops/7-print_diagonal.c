#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the dioganal \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (1 = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
