#include"main.h"
/**
 * times_table - func that prints 9 times table
 *
*/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
	{
		x = i * j;
		_putchar(x);
	}
		_putchar('\n');
	}
}
