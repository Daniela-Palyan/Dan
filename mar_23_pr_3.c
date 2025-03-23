#include <stdio.h>

int main()
{
	int num = 0, sum = 0;
	printf("Enter number: ");
	scanf("%d", &num);

	for(int i = 0; i < 32; i++)
	{
		if ((num | 1) == num)
		{
			sum++;
		}
		num = num >> 1;
	}	
	printf("1 in your number: %d\n", sum);

	return 0;
}
