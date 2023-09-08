#include"main.h"
/**
 * square - a func
 * @n: par
 * @val: par 2
 * Return: int
*/
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - func
 * @n: par
 * Return: n
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
