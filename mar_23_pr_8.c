#include <stdio.h>

int main()
{
	char tar = 0;
	printf("Enter letter: ");
	scanf("%c", &tar);
	if(tar > 64 && tar < 91 )
	{
		tar = (tar | 32);
		printf("Letter in lowercase is: %c\n", tar);
		return 0;
	}
	else if(tar > 96 && tar < 123)
	{
		tar = (tar ^ 32);
		printf("Letter in uppercase is: %c\n", tar);
		return 0;
	}
	else
		printf("Sorry, your character isn't letter!");

	return 0;
}
