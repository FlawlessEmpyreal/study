#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("--------输入1开始--------\n");
	printf("--------输入0开始--------\n");
}

//void game(char board[ROW][COL], int row, int col)
//{
//	
//}

//int test()
//{
//	scanf("%d\n", &input);
//	switch (input)
//	{
//	case 1:
//		printf("开始游戏\n");
//		char board[ROW][COL];//创建板子空间
//		Initboard(board, ROW, COL);//初始化板子的样子
//		Displayboard(board[ROW][COL], ROW, COL);//打印板子的格式
//		//game(board, ROW, COL);//游戏程序
//		break;
//	case 0:
//		printf("游戏结束");
//		break;
//	default:
//		printf("输入错误请重新输入\n");
//		break;
//	}
//}

int main()
{
	int input = 0;
	do
	{
		menu();//提示开始游戏
		//test();//进入游戏选择
		scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			char board[ROW][COL];//创建板子空间
			Initboard(board, ROW, COL);//初始化板子的样子
			Displayboard(board[ROW][COL], ROW, COL);//打印板子的格式
			//game(board, ROW, COL);//游戏程序
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while(input);
	
	return 0;
}