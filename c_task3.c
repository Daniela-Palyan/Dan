#include <stdio.h>


int main()

{

    for (int i = 0; i <= 100; i++)

    {

      if (i % 3 == 0)

      {

          if (i % 5== 0)

          {

              printf ("FizzBuzz ");

          }

          else

          {

            printf ("Fizz ");
  
          }

          
      }

      if (i % 5 == 0)

      {

        if (i % 3 != 0)

        {

            printf("Buzz ");

        }

    
      }

      if (i % 3 != 0 && i % 5 != 0)

      {

        printf ("%d ", i);

      }

    }



    return 0;

}
