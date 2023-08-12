#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: A C program that writes the possible combinations of single nos
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
	putchar(x + 48);
	if (x < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
