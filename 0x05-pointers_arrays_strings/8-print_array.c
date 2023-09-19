#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers
  * @a: array of integers
  * @n: number of elements of the array to be printed
  * Return: void
  */

void print_array(int *a, int n)

{
	int q;

	for (q = 0; q < n; q++)
	{
	printf("%d", a[q]);

	if (q != (n - 1))
	{
	 printf(", ");
	}
	}
	printf("\n");
	}
