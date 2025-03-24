#include <stdio.h>

int main()
{
	int num = 0, n = 0, mask = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter mask: ");
	scanf("%d", &mask);

	mask = (mask << n);
	num = (num & mask);
	printf("Result is: %d", num);

	return 0;
}
