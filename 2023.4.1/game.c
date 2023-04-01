#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h";


void Init_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			board[i][j] = ' ';
	}

	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//		printf("%c", board[i][j]);
	//	printf("\n");                  ////测试初始化结果
	//}
}


//void Display_board(char board[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1 /*&& i < row - 1*/)
//			{
//				//printf("|");
//				printf("/");
//			}
//			//else if (j == col - 1 && i < row - 1)
//			//	printf("_ _");
//			//else if (i == row - 1 && j < col - 1)
//			//	printf("/");
//			//else
//			//	printf("");
//		}
//		printf("\n");
//	}
//}

void Display_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		for (int j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
	}
}


//void Player_move(char board[ROW][COL], int row, int col)
////玩家输入为*
//{
//	int i = 0;
//	int j = 0;
//	int test = 0;
//	do
//	{
//		scanf("%d %d", &i, &j);
//		if (0 < i && i < 4 && 0 < j && j < 4) //第一行第一列坐标是1,1
//		{
//			board[i - 1][j - 1] = '*';//坐标位置替换成*
//			Display_board(board, ROW, COL);//重新打印面板
//			test = 1;
//		}
//		else
//		{
//			printf("输入错误请重新输入\n");
//			test = 0;
//		}
//	} while(test == 0);
//}


void Player_move(char board[ROW][COL], int row, int col)
//玩家输入为*
{
	int i = 0;
	int j = 0;
	int test_input = 0;
	do
	{
		test_input = 0;
		scanf("%d %d", &i, &j);
		if (0 < i && i < 4 && 0 < j && j < 4) //第一行第一列坐标是1,1
		{
			board[i - 1][j - 1] = '*';//坐标位置替换成*
			Display_board(board, ROW, COL);//重新打印面板
		}
		else
		{
			printf("输入错误请重新输入\n");
			test_input = 1;//输入错误数字重新输入.
		}
	} while (test_input);
}

void Computer_move(char board[ROW][COL], int row, int col)
//电脑下棋为#
{
	int i = 0, j = 0, test_computer_input= 0;
	do
	{
		i = rand() % 3 + 1;
		j = rand() % 3 + 1;
		if (board[i][j] == '#' || board[i][j] == '*')
			test_computer_input = 1;
		else
			board[i - 1][j - 1] = '#';
//		printf("%d %d\n", i, j);//测试随机数的生成结果
	} while (test_computer_input);//检测当前位置是否有棋子
	Display_board(board, ROW, COL);//重新打印面板
}