#include"main.h"
/**
 * more_numbers - a func that prints nos from 1 to 14 10 times
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j + 48);
			else
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
