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
	int y;

	m %= 10;
	y = (m*10) + m ;
	return (y);

}
