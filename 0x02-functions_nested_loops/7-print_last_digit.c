#include "main.h"
/**
 * print_last_digit - func that prints the last digit of no
 *
 * @m: the no
 *
 * Return: the last digit
*/
int print_last_digit(int m)
{

	int me;

	if (m < 0)
		me = (m % 10) * -1;
	else
		me = m % 10;
	_putchar(me + '0');
	return (m);

}
