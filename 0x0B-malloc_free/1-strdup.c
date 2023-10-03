#include "main.h"
#include <stdlib.h>

/**
  * _strdup - duplicate a string
  * @string: the string to duplicate
  * Return: the string duplicated
  */

char *_strdup(char *string)
{
	int a = 0, i = 1;
	char *s;

	if (string == NULL)
		return (NULL);

	while (string[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = string[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}

