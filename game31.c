#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
int i = 0;
int j = 0;
void Initboard(char board[ROW][COL], int row, int col)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("   ", board[i][j]);
			if (j < col)
				printf("|");
			if (i < row)
				printf("___");
		}
	}
}

