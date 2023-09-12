#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid - func
 * @width: int
 * @height: int
 * Return: int
*/
int **alloc_grid(int width, int height)
{
	int **p = (int **)malloc(width * sizeof(int));

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	for (i = 0; i < width; i++)
	{
			p[i] = malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
