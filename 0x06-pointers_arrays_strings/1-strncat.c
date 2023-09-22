#include "main.h"

/**
  * _strncat - concatenates two strings using at most
  * an inputted number of bytes from src
  * @dest: the string to be appended upon
  * @src: the string to be appended to dest
  * @a: the number of bytes from src to appended to dest
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int a)

{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < a; index++)
		dest[dest_len++] = src[index];
	return (dest);

}


