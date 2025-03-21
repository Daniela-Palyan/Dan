#include <stdio.h>

int main()
{
	int n = 0, a = 1, b = 0;
	printf("Enter N: ");
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i++)
	{
		int c = 0;
		c = a;
		a = a + b;
		b = c;
	}

	printf("%d\n", a);

	return 0;
}
