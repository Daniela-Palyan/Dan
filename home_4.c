#include <stdio.h>

int main()
{
        int num = 0, n = 1;
        printf("Enter number: ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
		for(int j = 0; j < i && n <= num; j++)
		{
			printf("%d ", n++);
		}
        	printf("\n");
	}
	return 0;
}

