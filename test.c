#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("--------����1��ʼ--------\n");
	printf("--------����0��ʼ--------\n");
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
//		printf("��ʼ��Ϸ\n");
//		char board[ROW][COL];//�������ӿռ�
//		Initboard(board, ROW, COL);//��ʼ�����ӵ�����
//		Displayboard(board[ROW][COL], ROW, COL);//��ӡ���ӵĸ�ʽ
//		//game(board, ROW, COL);//��Ϸ����
//		break;
//	case 0:
//		printf("��Ϸ����");
//		break;
//	default:
//		printf("�����������������\n");
//		break;
//	}
//}

int main()
{
	int input = 0;
	do
	{
		menu();//��ʾ��ʼ��Ϸ
		//test();//������Ϸѡ��
		scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			char board[ROW][COL];//�������ӿռ�
			Initboard(board, ROW, COL);//��ʼ�����ӵ�����
			Displayboard(board[ROW][COL], ROW, COL);//��ӡ���ӵĸ�ʽ
			//game(board, ROW, COL);//��Ϸ����
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while(input);
	
	return 0;
}