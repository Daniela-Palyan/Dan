#include <stdio.h>


int main()

{

    int num = 0, x = 0, a = 1, tv_qanak = 0;

    printf("Enter your number: ");

    scanf("%d", &num);
    x = num;

    while(x>0)

    {

        x = x/10;

        tv_qanak++;
 
   }

    for(int i = 1; i <= tv_qanak; i++)

    {

        a = 1;

        for(int j = 1; j <= tv_qanak-i; j++ )

        {

           a =  10 * a;

        }

        int c = num - num%a;

        printf("%d, ", c/a);

        num  = num - c;

    }


    return 0;

}
