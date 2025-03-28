#include <stdio.h>

int main()
{
	int n = 1;
	char *p1 = &n;
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
