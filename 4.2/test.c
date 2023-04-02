#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	Init_board(board, ROW, COL);//面板初始化
	Display_board(board, ROW, COL);//打印棋盘格式

	while (1)
	{
		Player_move(board, ROW, COL);//玩家下棋							//当玩家胜利返回‘*’
		Display_board(board, ROW, COL);									//当电脑胜利返回‘#’			
		ret = is_win(board, ROW, COL);//判断玩家是否胜利	            //平局返回‘p’
		if (ret != 'c')												    //没有结束时返回‘c’
			break;

		Computer_move(board, ROW, COL);//电脑下棋						
		Display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断电脑是否胜利
		if (ret != 'c')												  
			break;
	}
	if (ret == '*')													
	{
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利\n");
	}
	else
	{
		printf("平局\n");
	}
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