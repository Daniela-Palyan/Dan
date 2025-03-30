#include <stdio.h>

int main()
{
	char a = 'b';
	char * p = &a;
	printf("%p\n", p);
	printf("%p\n", ++p);

	return 0;
}
