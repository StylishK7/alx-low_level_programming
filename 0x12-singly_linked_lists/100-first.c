#include <stdio.h>
/**
* print - prints a string
* Return: returns 0
*/
void first(void) __attribute__ ((constructor));


void first(void)
{
char str[] = "You're beat! and yet, you must allow,";
char str1[] = "I bore my house upon my back!";
printf("%s\n%s\n", str, str1);
}
