#include"main.h"
/**
 * _puts - a func that prints a string
 * @str: a string
*/
void _puts(char *str)
{
	int sum = 0, i = 0, j;

	while (str[i] != 0)
	{
		if (str[i])
			sum++;
		else
			break;
		i++;
	}
	for (j = 0; j < sum; j++)
	{
		if (j != sum - 1)
			_putchar(str[j]);
		else
			_putchar ('\n');
	}
}
