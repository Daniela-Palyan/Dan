#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int op = 0, type = 0;
	printf("Choose type of your experession (1-unar, 2-binar): ");
	scanf("%d", &type);
	if(type = 2)
	{
		printf("Enter your expression (1-and, 2-or, 3-xor, 4->>, 5-<<(for exemple 6 3 7, 6 xor 7)): ");
		scanf("%d %d %d", &num1, &op, &num2);
		switch(op)
		{
			case 1:
				printf("Result is: %d\n", (num1 & num2));
				break;
			case 2:
                        	printf("Result is: %d\n", (num1 | num2));
                        	break;
			case 3:
                        	printf("Result is: %d\n", (num1 ^ num2));
                        	break;
			case 4:
                        	printf("Result is: %d\n", (num1 >> num2));
                        	break;
			case 5:
                                printf("Result is: %d\n", (num1 << num2));
                                break;


		}
	}
	else
	{
		printf("Enter your number to do not: ");
		scanf("%d", &num1);
		printf("Result is: %d\n", ~num1);

	}

	return 0;
		
}
