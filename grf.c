#include <stdio.h>

int main()
{
	char a[50][50];
	int x = 0, y = 49;

	for(; y >= 0; y--)
	{
		for(x = 0; x < 50; x++)
		{
			if(x * x == y)
				a[y][x] = '*';
			else
				a[y][x] = ' ';
			printf("%c", a[y][x]);
		}
		printf("\n");
	}

	return 0;
}
