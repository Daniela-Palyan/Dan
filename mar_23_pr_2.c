#include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter x: ");
	scanf("%d", &num);
	num = num << 1;
	printf("2*x = %d\n", num);

	return 0;
} 
