#include"main.h"
/**
 * print_square - a func that prints a square
 *
 * @size: int
*/
void print_square(int size)
{
	int i, j;

	if (i > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
	}
	else
		_putchar('\n');
}
