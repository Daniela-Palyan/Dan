#include <stdio.h>

int main()
{
	int num = 0, a = 1, x = 0, tv_qanak = 0, sum = 0;
	printf("Enter number: ");
	scanf("%d", &num);

	x = num;
    while(x > 0)
    {
        x = x/10;
        tv_qanak++;
    }
		
	for (int i = 0; i < tv_qanak; i++)
	{
		x = num % 10;
		for(int j = 0; j < tv_qanak; j++)
		{
			a *=x;
		}
		sum += a;
		num /= 10;
		
	}
	if (sum == num)
	{
		printf("yes, this is Armstrong number!\n");
	}
	else
	{
		printf("Nope \n");
	}
	
	
	return 0;
}
