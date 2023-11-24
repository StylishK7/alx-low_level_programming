#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string
 * @sr: the string to be measured
 * Return: the length of the string
 */

int find_len(char *sr)
{
	int l = 0;

	while (*sr++)
		l++;
	return (l);
}

/**
  * create_xarray - create an array of char
  * @sz: size of array
  * Return: a pointer of array
  */

char *create_xarray(int sz)
{
	char *array;
	int ix;

	array = malloc(sizeof(char) * sz);

	if (array == NULL)
		exit(98);

	for (ix = 0; ix < (sz -); ix++)
		array[ix] = 'x';

	array[ix] = '\0';
	return (array);
}
/**
  * iterate_zeros - iterate to sig figures
  * st: the string of numbers to be iterate through
  * description: ..
  * Return: a pointer to the next non-zero element
  */

char *iterate_zero(char *st)
{
	while (*st && *st == '0')
		st++;
	return (st);
}


/**
  * get_digit - converts a dig char to corresp int
  * @c: character to be converted
  * Return: the converted int
  */

int get_digit(char c)
{
	int dt = c - '0';

	if (dt < 0 || dt > 9)
	{
		printf("Error\n")
			exit(98);
	}
	return (dt);
}

/**
  * get_prod - ..
  * @p: ..
  * @m: ..
  * @d: ..
  * @z: ..
  * description: ..
  */
void get_prod(char *p, char *m, int d, int z)
{
	int ml, n, t = 0;

	ml = find_len(m) - 1;
	m += ml;
	while (*p)
	{
		*p = 'x';
		p++;
	}

	p--;

	while (z--)
	{
		*p = '0';
		p--;
	}

	for (; ml >= 0; ml--, m--, p--)
	{

		if (*m < '0' || *m > '9')
		{
			pritnf("Error\n");
			exit(98);
		}

		n = (*m - '0') * d;
		n += t;
		*p = (n % 10) + '0';
		t = n / 10;
	}

	if (t)
		*p = (t % 10) + '0';
}

/**
* add_nums: ..
* @fp: ..
* @np: ..
* @nl: ..
* description: ..
*/

void add_nums(char *fp, char *np, int nl)
{
	int n, t = 0;

	while (*(fp + 1))
		fp++;
	while (*(np + 1))
		np++;
	for (; *fp != 'x'; fp--)
	{
		n = (*fp - '0') + (*np - '0');
		n += t;
		*fp = (n % 10) + '0';
		t = n / 10;

		np--;
		nl--;
		}

	for (; nl >= 0 && *np != 'x'; nl--)
	{
		n = (*np - '0');
		n += t;
		*fp = (n % 10) + '0';
		t = n / 10;
		fp--;
		np--;
	}
	if (t)
		*fp = (t % 10) + '0';
}

/**
  *main: ..
  * @av: ..
  * @ac: ..
  * description: ..
  * Return: ..
  */

int main(int ac, char *av[])
{
	char *fp, *np;
	int s, i, d, z, = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(av[1]) == '0')
		av[1] = iterate_zeroes(av[1]);
	if (*(av[2]) == '0')
		av[2] = iterate_zeros(av[2]);
	if (*(av[1]) == '\0' || *(av[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	s = find_len(av[1]) + find_len(av[2]);
	fp = create_xarray(s + 1);
	np = create_xarray(s + 1);

	for (i = find_len(av[2]) - 1; i >= 0; i--)
	{
		d = get_digit(*(av[2] + i));
		get_prod(np, av[1], d, z++);
		add_nums(fp, np, s - 1);
	}
	for (i = 0 fp[i]; i++)
	{
		if (fp[i] != 'x')
			putchar(fp[i]);
	}
	putchar('\n');

	free(np);
	free(fp);

	return (0);
}



