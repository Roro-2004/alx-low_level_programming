#include"main.h"
#include<stdio.h>
/**
 * rev_string - a func
 * @s: char
*/
void rev_string(char *s)
{
	int i = 0, sum = 0, j, temp;

	while (s[i] != '\0')
	{
		if (s[i])
		{
			sum++;

		}
		else
			break;
		i++;
	}
	for (j = 0; j < sum / 2; j++)
	{
		temp = s[j];
		s[j] = s[sum - 1 - j];
		s[sum - 1 - j] = temp;
	}
}
