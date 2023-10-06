#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - ..
  * @t: ..
  * @os: ..
  * @ns: ..
  * Return: ..
  */

void *_realloc(void *t, unsigned int os, unsigned int ns)
{
	char *nt;
	unsigned int b;

	if (ns == os)
		return (t);

	if (t == NULL)
	{
		nt = malloc(ns);

		if (nt == NULL)
			return (NULL);

		return (nt);
	}
	else
	{
		if (ns == 0)
		{
			free(t);
			return (NULL);
		}
	}
	nt = malloc(ns);

	if (nt == NULL)
		return (NULL);

	for (b = 0; b < os && b < ns; b++)
	{
		nt[b] = ((char *) t)[b];
	}
	free(t);
	return (nt);
}

