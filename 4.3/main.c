#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("======����1��ʼ======\n=======����0����=========\n");
}

int main()
{	
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("test");
		case 0:
			printf("GameOver");
			break;
		default:
			input = 1;
		}
	} while (input);
	return 0;
}