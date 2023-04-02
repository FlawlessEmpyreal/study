#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	Init_board(board, ROW, COL);//����ʼ��
	Display_board(board, ROW, COL);//��ӡ���̸�ʽ

	while (1)
	{
		Player_move(board, ROW, COL);//�������							//�����ʤ�����ء�*��
		Display_board(board, ROW, COL);									//������ʤ�����ء�#��			
		ret = is_win(board, ROW, COL);//�ж�����Ƿ�ʤ��	            //ƽ�ַ��ء�p��
		if (ret != 'c')												    //û�н���ʱ���ء�c��
			break;

		Computer_move(board, ROW, COL);//��������						
		Display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);//�жϵ����Ƿ�ʤ��
		if (ret != 'c')												  
			break;
	}
	if (ret == '*')													
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
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