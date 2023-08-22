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
		return (1);
		putchar ('+');
	}
	else if (n < 0)
	{
		return (-1);
		putchar ('-');
	}
	else
	{
		return (0);
		putchar ('0');
	}
}
