#include <stdio.h>

int main()
{
	int A[] = {1,3,4,6,3,4,5,6};
	int i;
	for (i = 0; i < sizeof(A)/sizeof(A[0]); i++)

		printf("%d",A[i]);
	return (0);
}
