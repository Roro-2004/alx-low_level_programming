#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: A C program that prints the alphabet except e & q
 *
 * Return: 0 (sucess)
 *
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
	x++;
	}
	putchar('\n');
	return (0);
}
