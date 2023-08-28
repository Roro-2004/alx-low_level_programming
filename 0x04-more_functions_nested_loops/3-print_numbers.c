#include"main.h"
/**
 * print_numbers - prints nos from 1 to 9 followed by new line
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
