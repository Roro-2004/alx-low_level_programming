#include"main.h"
/**
 * print_most_numbers - a func that prints nos from 1 to 9 except 2 & 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
			_putchar (i + 48);
	}
	_putchar('\n');
}
