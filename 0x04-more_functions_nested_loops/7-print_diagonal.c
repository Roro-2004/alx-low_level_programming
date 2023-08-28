#include"main.h"
/**
 * print_diagonal - a func prints \ for a digonal
 * @n: int
*/
void print_diagonal(int n)
{
	int i, j, arr[1000][1000];

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					arr[i][j] = 92;
				}
				else
					arr[i][j] = 32;
			}
		}
		for (i =0; i < n; i++){
			for (j =0; j < n; j++)
			{
				_putchar(arr[i][j]);
			}
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
