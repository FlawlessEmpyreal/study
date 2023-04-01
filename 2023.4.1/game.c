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
	int test_input = 0;
	do
	{
		test_input = 0;
		scanf("%d %d", &i, &j);
		if (0 < i && i < 4 && 0 < j && j < 4) //��һ�е�һ��������1,1
		{
			board[i - 1][j - 1] = '*';//����λ���滻��*
			Display_board(board, ROW, COL);//���´�ӡ���
		}
		else
		{
			printf("�����������������\n");
			test_input = 1;//�������������������.
		}
	} while (test_input);
}

void Computer_move(char board[ROW][COL], int row, int col)
//��������Ϊ#
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
//		printf("%d %d\n", i, j);//��������������ɽ��
	} while (test_computer_input);//��⵱ǰλ���Ƿ�������
	Display_board(board, ROW, COL);//���´�ӡ���
}