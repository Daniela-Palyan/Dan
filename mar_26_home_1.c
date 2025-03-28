#include <stdio.h>

int main()
{
	int a = 4;
	int * p = &a;
	printf("%p\n", p);
	printf("%p\n", &a);
	printf("%d\n", *p);
	
	return 0;
}
