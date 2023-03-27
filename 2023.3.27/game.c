#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("   \n", board[i][j]);
			if (j < col - 1)
				printf("   |");
			if (i < row - 1)
				printf("___|", board[i][j]);
		}
	}
}

void game()
{

}
