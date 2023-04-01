#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char board[ROW][COL] = {0};
	Init_board(board, ROW, COL);//面板初始化
	Display_board(board, ROW, COL);//打印棋盘格式
	Player_move(board, ROW, COL);//玩家下棋
	Computer_move(board, ROW, COL);//电脑下棋
}


void menu()
{
	printf("-----1开始-----\n");
	printf("-----0结束-----\n");
}


void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("重新选择\n");
		}	
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}