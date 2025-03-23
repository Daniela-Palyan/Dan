#include <stdio.h>

int main()
{
	int num = 0, n = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter n: ");
	scanf("%d", &n);

	num = (num >> n);
	if ((num | 1) == num)
		printf("In %d-th bit is 1!\n ", n);
	else
		printf("In %d-th bit is 0!\n", n);

	return 0;

}
