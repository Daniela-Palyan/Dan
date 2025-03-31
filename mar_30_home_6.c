#include <stdio.h>

int main()
{
    int high = 5, len = 6;
    int m[high][len], sum[high];
    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("Enter number (%d, %d): ", i, j);
            scanf("%d", &m[i][j]);
            sum[i] += m[i][j];
        }
    }
	for (int i = 0; i < high; i++)
		printf("Sum of row N0 %d is: %d\n", i, sum[i]);
   
    return 0;
}
