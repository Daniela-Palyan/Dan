#include <stdio.h>

int main()
{
	int a = 1;
	int b = a;
	int * p = &a;
	*p = *p + 3;
	printf("%d\n", *(p + 1));
	printf("%d\n", *p);

	return 0;
	
}
