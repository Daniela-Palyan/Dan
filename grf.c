#include <stdio.h>

int main()
{
	char a[50][100];
	int x = -51, y = 49;

	for(; y >= 0; y--)
	{
		for(x = -9; x < 9; x++)
		{
			if(x * x == y)
			{
				a[y][(x + 50)] = '*';
			}
			else
				a[y][x + 50] = ' ';
			printf("%c", a[y][x + 50]);
		}
		printf("\n");
	}

	return 0;
}
