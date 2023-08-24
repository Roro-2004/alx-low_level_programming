#include<stdio.h>
/**
 * main - Entry point
 *
 *Description: a c program that prints sum of mult of 3 & 5
 *
 * Return: always 0
*/
int main(void)
{
	int sum = 0, x = 1024;

	while (x != 0)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
		sum += x;
		x = x - 1;
	}
	}
	return (0);
}
