#include <stdio.h>

int main()
{
	int a = 3, b = 17, c = 0;
	int *p = &c;
	printf("%d, %d\n", a, b);
	*p = a;
	a = b;
	b = *p;
	printf("%d, %d\n", a, b);

	return 0;
	
	
}
