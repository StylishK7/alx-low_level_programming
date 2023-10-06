#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ..
  * @a1: ..
  * @a2: ..
  * @b: ..
  * Return: ..
  */

char *string_nconcat(char *a1, char *a2, unsigned int b)
{
	unsigned int q = 0, w = 0, e = 0, r = 0;
	char *str;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	while (a1[q])
		q++;

	while (a2[e])
		e++;
	if (b >= e)
		r = q + e;
	else
		r = q + b;
	str = malloc(sizeof(char) * r + 1);
	if (str == NULL)
	return (NULL);
	e = 0;
	while (w < r)
	{
		if (w <= q)
			str[w] = a1[w];

		if (w >= q)
		{
			str[w] = a2[e];
			e++;
		}
		w++;
	}
	str[w] = '\0';
	return (str);
}

