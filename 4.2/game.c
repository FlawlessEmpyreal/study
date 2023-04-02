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
	//	printf("\n");                  ////���Գ�ʼ�����
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
////�������Ϊ*
//{
//	int i = 0;
//	int j = 0;
//	int test = 0;
//	do
//	{
//		scanf("%d %d", &i, &j);
//		if (0 < i && i < 4 && 0 < j && j < 4) //��һ�е�һ��������1,1
//		{
//			board[i - 1][j - 1] = '*';//����λ���滻��*
//			Display_board(board, ROW, COL);//���´�ӡ���
//			test = 1;
//		}
//		else
//		{
//			printf("�����������������\n");
//			test = 0;
//		}
//	} while(test == 0);
//}


void Player_move(char board[ROW][COL], int row, int col)
//�������Ϊ*
{
	int i = 0;
	int j = 0;
	
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (0 < i && i < 4 && 0 < j && j < 4) //��һ�е�һ��������1,1
		{
			board[i - 1][j - 1] = '*';//����λ���滻��*
			break;
		}
		else
		{
			printf("�����������������\n");
			//�������������������.
		}
	}
}

//void Computer_move(char board[ROW][COL], int row, int col)
//��������Ϊ#
//{
//	int i = 0, j = 0, test_computer_input= 0;
//	do
//	{
//		i = rand() % row;
//		j = rand() % col;
//		if (board[i][j] == '#' || board[i][j] == '*')
//			test_computer_input = 1;
//		else
//			board[i][j] = '#';
////		printf("%d %d\n", i, j);//��������������ɽ��
//	} while (test_computer_input);//��⵱ǰλ���Ƿ�������
//}

//ʹ�÷������ĵ�������

static int is_full(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
				return 0;
		}
	}
	return 1;
}

void Computer_move(char board[ROW][COL], int row, int col)
{
	while (1)
	{ 
		int x = 0, y = 0;
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)//�ж���
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//���һ��֪ʶ�㡣
			return board[i][0];
	}
	for (j = 0; j < col; j++)//�ж���
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (is_full(board, ROW, COL) == 1) //�ж�ƽ��
	{
		return 'p';
	}

	 return 'c';//֮ǰ��û�з��ؾͷ���c
}