#include"main.h"
/**
 * swap_int - a func that swaps using ptrs
 * @a: ptr 1
 * @b: ptr 2
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
