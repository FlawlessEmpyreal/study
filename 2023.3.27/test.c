#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int input = 0;
void menu()
{
	printf("--------����1��ʼ--------\n");
	printf("--------����0��ʼ--------\n");
}

void test()
{
	scanf("%d\n", &input);
	switch (input)
	{
	case 1:
		printf("��ʼ��Ϸ\n");
		char board[ROW][COL];//�������ӿռ�
		Initboard(board, ROW, COL);//��ʼ�����ӵ�����
		game();//��Ϸ����
		break;
	case 0:
		printf("��Ϸ����");
		break;
	default:
		printf("�����������������\n");
		break;
	}
}

int main()
{
	do
	{
		menu();//��ʾ��ʼ��Ϸ
		test();//������Ϸѡ��
	} while(input);
	
	return 0;
}