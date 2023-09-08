#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - func
 * @a: arr
 * @size: int
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum1 = 0;

	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i * size + (size - 1 - i)];
	}
	for (j = 0; j < size; j++)
	{
		sum += a[size * j + j];
	}
	printf("%d, %d\n", sum, sum1);
}
