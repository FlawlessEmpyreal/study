#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("=======Input 1 to start=======\n=======Input 0 to end=======\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	Init_board(mine, ROWS, COLS, '0');//Init the mine board, size 11*11
	Init_board(show, ROWS, COLS, '*');//Init the sheow board, size 11*11

	set_mine(mine, ROW, COL, MINE_COUNT);//install the mine
	while ()
	{
		Display_board(mine, ROW, COL);//Display the mine board, size 9*9
		Display_board(show, ROW, COL);//Display the show board, size 9*9

		Find_mine(mine, show, ROW, COL);
	}
}



int main()
{	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			/*printf("test");*/
			game();
			break;
		case 0:
			printf("GameOver\n");
			break;
		default:
			input = 1;
			break;
		}
	} while (input);
	return 0;
}