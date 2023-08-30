#include"main.h"
/***/
int _strlen(char *s)
{
	int i = 0, sum = 0;

	while (s[i] != 0)
	{
		if (s[i])
		{
			sum ++;
		}
		else
			break;
		i ++;
	}
	return (sum);
}
