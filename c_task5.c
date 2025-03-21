#include <stdio.h>

int main()
{
    int n = 0;
    int p = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }

printf("N! = %d\n", p);
    return 0;

}
