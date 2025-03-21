#include <stdio.h>


int main()

{

    int a = 0;

    int b = 0;

    int c = 0;

    int d = 0;

    int s = 0;

    printf("Enter a: ");

    scanf("%d", &a);

    printf("Enter b: ");

    scanf("%d", &b);

    if(a > b)

    {
      c = b;

      d = a;

    }

    else if (a == b)

    {

      printf("There are no numbers between a and b :/\n");

    }

    else

    {

      c = a;

      d = b;

    }

    for (; c < d; c++)

    {

      if(c % 5 == 0)

      {

        s++;

      }

    }

    printf("Count of numbers divisible by 5 is: %d", s);



    return 0;

}
