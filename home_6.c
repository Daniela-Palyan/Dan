#include <stdio.h>

int main()
{
        int n = 0;
        printf("Enter n: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
		if(i == 1 || i == n)
		{
			for (int j = 0; j < n; j++)
                	{	
                        	printf("*");
                	}
		}
		else
		{
			for (int j = 1; j <= n; j++)
                        {
				if(j == 1 || j == n)
                                	printf("*");
				else
					printf(" ");
                        }
		}
		printf("\n");
        }
        return 0;
}

