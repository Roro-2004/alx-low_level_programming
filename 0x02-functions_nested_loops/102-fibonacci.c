#include<stdio.h>
/***/
int main(void)
{
	int f[51], f[0] = 0, f[1] = 1, i;

	for (i = 2; i <= 50; i++)
	{
	f[i] = f[i - 1] + f[i - 2];
	printf("0, 1, %d\n",f[i]);
	}

}
