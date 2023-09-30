#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints  minimal number of coins for change
  * @argc: argument count
  * @argv: argument vector
  * Return: 1 if arguments != 0 otherwise 0
  */

int main(int argc, char *argv[])
{
	int c, q = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	while (c > 0)
	{
		q++;

		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
			if ((c - 5) >= 0)
		{
				c -= 5;
				continue;
				}
				if ((c - 2) >= 0)
				{
				c -= 2;
				continue;
				}
				c--;
				}
	printf("%d\n", q);
	return (0);
}
