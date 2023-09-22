#include "main.h"

/**
  * _strcmp - compares pointer to two strings
  * @str1: a pointer to the first string to be compared
  * @str2: a pointer to the second string to be compared
  * Return: if str1 < str2, the negative difference
  * of the first unmatched characters
  * if str1 == str2, 0
  * if str1 > str2, the positive difference
  * of the first unmatched characters
  *
  */

int _strcmp(char *str1, char *str2)

{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);

}
