#include <stdio.h>

int main()
{
	int i = 0, num = 0, a = 1;
	printf("Enter number: ");
	scanf("%d", &num);
	for( ; i < 32; i++)
	{
		if((num & a) == num)
		{
			printf("Yes\n");
			break;
		}
		a = (a << 1);	
	}
	if(i > 31)
		printf("No\n");

	return 0;
}
