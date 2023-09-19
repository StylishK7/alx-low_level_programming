#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords for the program
  * Return: always 0
  */

int main(void)

{
	char pw[84];
	int i = 0, s = 0, dh1, dh2;

	srand(time(0));

	while (s < 2772)
	{
		pw[i] = 33 + rand() % 94;
		s += pw[i++];
	}
	pw[i] = '\0';

	if (s != 2772)
	{
		dh1 = (s - 2772) / 2;
		dh2 = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
			dh1++;
		for (i = 0; pw[i]; i++)
		{
			if (pw[i] >= (33 + dh1))
			{
				pw[i] -= dh1;
				break;
			}
		}
		for (i = 0; pw[i]; i++)
		{
			if (pw[i] >= (33 + dh2))
			{
				pw[i] -= dh2;
				break;
			}
		}
	}
	printf("%s", pw);
	return (0);
}



