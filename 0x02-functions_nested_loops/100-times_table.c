#include"main.h"
/**
 * print_times_table - a func that prints time table of n
 *
 * @n: int
*/
void print_times_table(int n)
{
	int i, j, x, y;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			y = i * (j + 1);
			if (j != n)
			{
			if (y <= 9)
			{
				printf("%d,   ", x);
			}
			else if ( y >= 100)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d  ", x);
			}
			}
			else
			{
				printf("%d", x);
			}
		}
		printf("\n");
	}
}
