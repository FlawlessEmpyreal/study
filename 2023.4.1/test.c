#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char board[ROW][COL] = {0};
	Init_board(board, ROW, COL);//����ʼ��
	Display_board(board, ROW, COL);//��ӡ���̸�ʽ
	Player_move(board, ROW, COL);//�������
	Computer_move(board, ROW, COL);//��������
}


void menu()
{
	printf("-----1��ʼ-----\n");
	printf("-----0����-----\n");
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
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("����ѡ��\n");
		}	
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}