#include <stdio.h>

int main()
{
    int qan = 10;
    int a[qan], poqr = 0;
    for (int i = 0; i < qan; i++)
    {
        printf("Enter number N0 %d: ", i + 1);
        scanf("%d", &a[i]);
        if(i == 0)
            poqr = a[0];
        if(a[i] < poqr)
            poqr = a[i];
    }
    printf("Min number is: %d", poqr);
   
    return 0;
}
