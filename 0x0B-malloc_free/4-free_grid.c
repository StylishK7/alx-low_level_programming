#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - .
  * @g: .
  * @h: .
  * Return: .
  */

void free_grid(int **g, int h)
{
	int a;

	for (a = 0; a < h; a++)
	{
		free(g[a]);
	}
	free(g);
}

