#include"main.h"
/**
 * print_sign - tells weather the no is + , - or 0
 *
 * @n: the int
 *
 * Return: 0 no is zero  1 the no is pos -1 the no is neg
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
