#include "main.h"

/**
 * swap_int of two integer type.
 * @a: is a pointer int type
 * @b: is a pointer int type
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
