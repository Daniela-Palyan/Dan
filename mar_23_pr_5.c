#include <stdio.h>

int main()
{
	int index = 0, num = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter index: ");
	scanf("%d", &index);
	index = (1 << index);
	num = (num | index);
	printf("Result is: %d\n", num);

	return 0;
}
