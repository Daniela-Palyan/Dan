#include <stdio.h>

int main()
{
    int qan = 10;
    int a[qan], poqr = 0, mec = 0;
    for (int i = 0; i < qan; i++)
    {
        printf("Enter number N0 %d: ", i + 1);
        scanf("%d", &a[i]);
        if (i == 0)
        {
            poqr = a[0];
            mec = a[0];
        }
        if(a[i] < poqr)
            poqr = a[i];
        if(a[i] > mec)
            mec = a[i];
    }
    printf("Sum of the max and min numbers is: %d", poqr + mec);
   
    return 0;
}
