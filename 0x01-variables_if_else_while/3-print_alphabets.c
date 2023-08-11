#include<stdio.h>

/**
 * main -Entry poimt
 *
 * Description: A C program that prints upper and lower case letters
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	char x = 'a', y = 'A';

	while (x < 'z')
	{
	putchar(x);
	x++;
	}
	while (y < 'Z')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}
