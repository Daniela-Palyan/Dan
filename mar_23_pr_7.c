#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	printf("Enter x & y: ");
	scanf("%d, %d", &x, &y);
	 x = (x ^ y);
	 y = (x ^ y);
	 x = (x ^ y);

	 printf("x = %d, y = %d\n", x, y);

	return 0; 
}
