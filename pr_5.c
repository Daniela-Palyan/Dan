#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while(num)
    {
        if(num % 10 != 4 && num % 10 != 7 )
        {
            break;
        }
        num /= 10;
    }
    if(num > 0)
        printf("Not happy number\n");
    else
        printf("Happy number\n");

    return 0;
}
