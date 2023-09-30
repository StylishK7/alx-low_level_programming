#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
  *main - prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: always zero
  */

int main(int argc, char *argv[])
{
	int n;
	unsigned int a, sum = 0;
	char *q;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			q = argv[n];

		for (a = 0; a < strlen(q); a++)
		{
			if (q[a] < 48 || q[a] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(q);
		q++;
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
