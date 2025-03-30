#include <stdio.h>

int main()
{
    int high = 5, len = 6;
    int m[high][len], sum = 0;
    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("Enter number (%d, %d): ", i, j);
            scanf("%d", &m[i][j]);
            sum += m[i][j];
        }
        printf("Sum of numbers (%d) is: %d\n", i, sum);
        sum = 0;
    }
   
    return 0;
}
