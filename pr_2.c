#include <stdio.h>

int main()
{
	int a = 0, b = 0, res = 1;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	for(int i = 0; i < b; i++)
	{
		res *=a;
	}
	printf("Result is: %d\n", res);

	return 0;
}
