#include"main.h"
#include<stdio.h>
/**
 * puts_half - func
 * @str: array
*/
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i] != '\0')
	{
		if (str[i])
			len++;
		else
			break;
		i++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
