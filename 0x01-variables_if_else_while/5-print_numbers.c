#include<stdio.h>
/**
 * main -Entry
 *
 * Description: A C program that prints numbers from 0 to 9
 *
 * Return:0 (sucessful)
 *
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	printf("%d", i);
	}
	putchar ('\n');
	return (0);
}
