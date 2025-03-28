#include <stdio.h>

int main()
{
	int n = 1;
	int *p = &n;
	char *p1 = (char *)p;
	if (*p1 == 1)
	{
		printf("little\n");
	}
	else
	{
		printf("big\n");
	}

	return 0;
}
