#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("   ", board[i][j]);
		}
	}
}

//void Displayboard(char board[ROW][COL], int row, int col)
//{
//	for (i = 0, i < row, i++)
//	{
//		for (j = 0, j < col, j++)
//			printf()
//	}
//}

void game()
{

}
