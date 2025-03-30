#include <stdio.h>

int main()
{
	int * p = NULL;
	if (p == NULL)
	{
		printf("p is null\n");
	}
	int num = 7;
	p = &num;
	printf("%d\n", *p);

	return 0;
}
