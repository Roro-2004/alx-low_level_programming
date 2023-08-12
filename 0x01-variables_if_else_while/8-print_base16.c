#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: A C program that writes hexa decimal numbers
 *
 * Return: 0 (sucees)
 *
*/
int main(void)
{
	char i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + 48);
	}
	for (j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
