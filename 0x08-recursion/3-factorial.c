#include"main.h"
/**
 * factorial - a func
 * @n: int
 * Return: x
*/
int factorial(int n)
{
	int x;

	if (n < 0)
		x = -1;

	else
	{
		if (n == 1)
		{
			return (1);
		}
			x = n * factorial(n - 1);

	}
	return (x);
}
