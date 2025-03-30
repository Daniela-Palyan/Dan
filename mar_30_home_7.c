#include <stdio.h>

int main()
{
    int s = 3;
    int m[s][s], sum = 0;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("Enter numbers (%d, %d): ", i, j);
            scanf("%d", &m[i][j]);
            if(i == j)
                sum += m[i][j];
        }
    }
    printf("Sum is: %d", sum);
   
    return 0;
}
