#include <stdio.h>

int main()
{
    int qan = 10;
    int a[qan], mec = 0;
    for (int i = 0; i < qan; i++)
    {
        printf("Enter number N0 %d: ", i + 1);
        scanf("%d", &a[i]);
        if(i == 0)
            mec = a[0];
        if(a[i] > mec)
            mec = a[i];
    }
    printf("Max entered number is: %d", mec);
   
    return 0;
}
