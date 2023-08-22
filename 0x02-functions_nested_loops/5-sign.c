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
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
