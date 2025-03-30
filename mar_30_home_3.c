#include <stdio.h>

int main()
{
    int qan = 10;
    int a[qan], mec = 0;
    for (int i = 0; i < qan; i++)
    {
        printf("Enter number with index %d: ", i);
        scanf("%d", &a[i]);
        if(a[i] > a[mec])
            mec = i;
    }
    printf("Index of max number is: %d", poqr);
   
    return 0;
}
