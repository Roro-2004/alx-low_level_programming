#include"main.h"
/**
 * print_line - a func that print n _
 *
 * @n: no
*/
void print_line(int n)
{
	if (n > 0)
	{
	while (n != 0)
	{
		_putchar (95);
		n--;
	}
	}
	_putchar ('\n');
}
