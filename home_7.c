#include <stdio.h>

int main()
{
	int m = 0, n = 0;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			for(int j = (n - 1); j > 0; j-- )
			{
				printf(" ");
			}
			printf("*\n");
		}
		else if(i == n)
		{
			for(int j = 2 * n -1; j > 0; j--)
				printf("*");
			printf("\n");
		}
		else
		{
			for(int j = 1; j <= (n - 1 + i); j++)
			{
				if(j == (n - 1 + i) || j == (n + 1 - i))
				{
					printf("*");
				}
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

