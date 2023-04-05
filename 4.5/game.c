#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Init_board(char arr[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			arr[i][j] = set;
	}
}

void Display_board(char arr[ROWS][COLS], int row, int col)
{
	printf("=======================\n");

	for (int j = 0; j <= col; j++)//X-axis
	{
		printf("%d|", j);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)//Y-axis
	{
			printf("%d|", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c|", arr[i][j]);
		}
		printf("\n");
	}
	printf("=======================\n");
}


void set_mine(char arr[ROWS][COLS], int row, int col, int count)//set coordinate
{
	int i = 0, j = 0;
	while(count)//set the number of count mines
	{
			i = rand() % row + 1;
			j = rand() % col + 1;
			if (arr[i][j] == '0')
			{
				arr[i][j] = '1';//prevent duplication
				count--;
			}
	}
}

//int Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0, y = 0;
//	do
//	{
//		printf("plz input coordinate");
//		scanf("%d %d", &x, &y);//input ,find mine
//		if (1 <= x && x <= ROW && 1 <= y && y <= COL)
//			break;
//		else
//			printf("error, plz Re input");
//	} while (1);
//	if (mine[x][y] == '1')
//	{
//		printf("You die");//mine explode
//		return 0;
//	}
//	else
//		Expand(mine, show, x, y);//no bombs and expand.
//	return 1;
//}
//
//void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	int n = 0, i = 1, j = 1;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			if (i == x && j == y)
//				continue;
//			else if (mine[i][j] == '1')
//			{
//				n++;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	mine[x][y] = '#';//Marked location, searched
//	show[x][y] = 'n';//Display the number of mines to show_arr
//
//	if (mine[x - 1][y] == '0' && x - 1 >= 1)
//		Expand(mine, show, x, y);
//	if (mine[x + 1][y] == '0' && x + 1 <= 9)
//		Expand(mine, show, x, y);
//	if (mine[x][y - 1] == '0' && y - 1 >= 1)
//		Expand(mine, show, x, y);
//	if (mine[x][y + 1] == '0' && y + 1 <= 9)
//		Expand(mine, show, x, y);
//}

void Count_mine(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int ret = 0;
	ret  =  mine[x - 1][y - 1] +
			mine[x - 1][y] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] - 8 * '0';
	show[x][y] = ret + 48;
	Display_board(show, ROW, COL);
}

void Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, count_mine = 0, win = 0;
	while (win < ROW * COL - MINE_COUNT)
	{
		printf("input the coordinate>:");
		scanf("%d %d", &x, &y);
		if (1 <= x && x <= 9 && 1 <= y && y <= 9)
		{

			if (mine[x][y] == '1')
			{
				printf("You die\n");
				Display_board(mine, ROW, COL);
			}
			else
			{
				Count_mine(show, mine, x, y);
				win++;
			}
		}
		else
			printf("error,plz Re input");
	}

	if (win == ROW * COL - MINE_COUNT)
		printf("You win");
}


