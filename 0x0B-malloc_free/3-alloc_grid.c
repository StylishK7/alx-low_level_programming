#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - ..
  * @w: ..
  * @h: ..
  * Return: ..
  */

int **alloc_grid(int w, int h)
{
	int i, j, k, l;
	int **a;

	if (w <= 0 || h <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * h);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < h; i++)
	{
		a[i] = malloc(sizeof(int) * w);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < h; k++)
	{
		for (l = 0; l < w; l++)
		{
			a[k][l] = 0;
		}
	}
	return (a);
}

