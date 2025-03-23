#include <stdio.h>

int main()
{
	int num = 0, n = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d/(2^%d)=%d\n", num, n, num >> n);
	printf("%d*(2^%d)=%d\n", num, n, num << n);
	return 0;

}
