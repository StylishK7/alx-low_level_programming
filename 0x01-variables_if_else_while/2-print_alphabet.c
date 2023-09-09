#include <stdio.h>

/**
 * main - 'prints the alphabet in lower case'
 * Return: Always  0 (success)
 */


int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
