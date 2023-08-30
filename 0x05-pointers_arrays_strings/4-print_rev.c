#include"main.h"
/**
 * print_rev - a func that prints a string
 * @s: a string
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
_putchar(s[j]);
if (j == 0)
_putchar ('\n');
}
if (sum == 0)
_putchar('\n');
}
