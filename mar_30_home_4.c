#include <stdio.h>

int main()
{
    int qan = 10;
    int a[qan], poqr = 0;
    for (int i = 0; i < qan; i++)
    {
        printf("Enter number with index %d: ", i);
        scanf("%d", &a[i]);
        if(a[i] < a[poqr])
            poqr = i;
    }
    printf("Index of the min number is: %d", poqr);
   
    return 0;
}
