#include <stdio.h>

int main() 
{
	int num = 0, x = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	x = num;
	int reverse = 0;
	while (x)
	{
		reverse = reverse * 10 + x % 10;
		x /= 10;
	}
	while (reverse > 9)
	{
        x = reverse % 10;
        reverse /= 10;
        printf("%d, ", x);
    }	
	printf("%d\n", reverse);
	return 0;
}
