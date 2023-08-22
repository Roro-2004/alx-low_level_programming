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

	m %= 10;
	_putchar(m + '0');
	return (m);

}
