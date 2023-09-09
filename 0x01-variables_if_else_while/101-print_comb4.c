#include<stdio.h>
/**
  *main - prints all possible different combinations of these digits
  *Return: always 0
  */
int main(void)

{
	int a = '0';
	int b = '0';
	int c = '0';

	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	for (c = b + 1; c <= '9'; c++)
	{
	if ((b != a) != c)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8')
		continue;
	putchar(',');
	putchar(' ');

	}
	}
	}
	}

	putchar('\n');
	return (0);

}

