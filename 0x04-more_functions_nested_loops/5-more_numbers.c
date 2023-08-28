#include"main.h"
/**
 * more_numbers - a func that prints nos from 1 to 14 10 times
*/
void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j;
			if (j > 9)
			{
				_putchar(49);
				x = j % 10;
			}
				_putchar(x + 48);
		}
		_putchar('\n');
	}
}
