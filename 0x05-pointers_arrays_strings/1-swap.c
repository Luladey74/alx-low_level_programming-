#include "main.h"
/**
 * swap_int - swap variable values
 * @a: int a
 * @b: int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}