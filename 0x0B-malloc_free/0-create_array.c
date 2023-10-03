#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @sz: the size of the array
  * @cr: the char to fill in the array
  * Return: the array filled
  */

char *create_array(unsigned int sz, char cr)
{
	unsigned int i;
	char *s;

	if (sz == 0)
		return (NULL);
	s = malloc(sz * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < sz; i++)
	{
		s[i] = cr;
	}
	return (s);
}



