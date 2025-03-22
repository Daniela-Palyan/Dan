#include <stdio.h>

int main()
{
	int num = 0, a = 1, x = 0, sum = 0;
	printf("Enter number: ");
	scanf("%d", &num); 
	int y = num;
    while (y)
    {
        x = num;
        while (x)
        {
            a = a  * (y % 10);
            x /= 10;
        }
        
        sum  = sum + a;
        y /= 10;
        a = 1;
    }
	if (sum == num)
	{
	    printf("This is armstrong number");
	}
	else
	{
	    printf("nope");
	}
	
	return 0;
}
