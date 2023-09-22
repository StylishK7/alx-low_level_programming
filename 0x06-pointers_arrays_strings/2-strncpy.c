#include "main.h"

/**
  * _strncpy - copies at most at inputted number
  * of bytes from string src to dest
  * @dest: the buffer storing the string copy
  * @src: the source string
  * @a: the maximum number of bytes to copy from src
  * Return: a pointer to the resulting string dest
  */

char *_strncpy(char *dest, char *src, int a)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < a; index++)
		dest[index] = src[index];

	for (index = src_len; index < a; index++)
		dest[index] = '\0';

	return (dest);

}
