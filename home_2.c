#include <stdio.h>

int main()
{
	int a = 0, sum = 0;
	printf("Enter a: ");
	scanf ("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
		    sum += i;
		}
	}
    if (sum == a)
    {
        printf("Kataryak tiv\n");
    }
    else
    {
        printf("Voch kataryal tiv\n");
    }
	return 0;
}
