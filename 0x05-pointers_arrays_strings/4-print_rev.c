#include"main.h"
/**
 * _print_rev - a func that prints a string
 * @str: a string
*/
void print_rev(char *s)
{
	int sum = 0, i = 0, j;

	while (s[i] != 0)
	{
		if (s[i])
			sum++;
		else
			break;
		i++;
	}
	for (j = sum - 1; j >= 0; j--)
	{
		if (j != 0)
			_putchar(s[j]);
		else
			_putchar ('\n');
	}
}
