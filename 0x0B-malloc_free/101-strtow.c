#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 *word_len - locates the index marking the end of the first word in str
 * @str: the string to be searched
 * Return: the index marking the end
*/

int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
   * count_words - counts the number of words contained within a string
   * @str: the string to be searched.
   * Return: the number of words within a atring
*/

int count_words(char *str)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	}
	return (w);
}

/**
  * strtow - splits a string into words
  * @str: the string to be split
  * Return: if str = NULL, str = ""
  * otherwise - a pointer to an array of strings
  */

char **strtow(char *str)
{
	char **strings;
	int i = 0, w, w1, l1, l2;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w = count_words(str);

	if (w == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (w + 1));

	if (strings == NULL)
		return (NULL);

	for (w1 = 0; w1 < w; w1++)
	{
		while (str[i] == ' ')
			i++;
		l1 = word_len(str + i);

		strings[w1] = malloc(sizeof(char) * (l1 + 1));

		if (strings[w1] == NULL)
		{
			for (; w1 >= 0; w1--)
				free(strings[w1]);

			free(strings);
			return (NULL);
		}

		for (l2 = 0; l2 < l1; l2++)
			strings[w1][l2] = str[i++];
		strings[w1][l2] = '\0';
	}
	strings[w1] = NULL;
	return (strings);
}


