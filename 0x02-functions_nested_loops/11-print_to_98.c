#include"main.h"
/**
 * print_to_98 - func that prints nos till 98
 *
 * @n: the start
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98 ; i++)
	{
		printf("% d", i);
		_putchar(44);
	}
	_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
			printf("% d", i);
			_putchar(44);
			_putchar(' ');
			}
			else
			{
			printf("98");
			}
		}
		_putchar('\n');
	}
}
