#include <stdio.h>


int main()

{

    int num = 0, x = 0;

    printf("Enter number: ");

    scanf("%d", &num);
    while (num >= 1)

    {

        x = num % 10;

        num = num / 10;

        printf("%d", x);

    }

    

    return 0;

}
