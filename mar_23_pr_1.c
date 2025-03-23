#include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter your number: ");
	scanf("%d", &num);
	if((num | 1) == num)
		printf("kent\n");
	else
		printf("zuyg\n");

	return 0;
}
