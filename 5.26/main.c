#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("***********************************\n");
	printf("**********1.ADD    2.DEL***********\n");
	printf("**********3.SEARCH 4.SHOW**********\n");
	printf("**********5.MODIFY 0.EXIT**********\n");
	printf("***********************************\n");
}

int main()
{
	struct con c;
	Init_contact(&c);
	while (1)
	{
		assert(c.date[999].age == 0);//���һ������Ϊ0,����֮ǰ��ɾ��
		menu();
		printf("���������ָ��");
		int input;
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_contact(&c);
			break;
		case DEL:
			Del_contact(&c);
			break;
		case SEARCH:
			Search_contact(&c);
			break;
		case SHOW:
			Show_contact(&c);
			break;
		case MODIFY:
			Modify_contact(&c);
			break;
		case EXIT:
			return 0;
			break;
		default:
			printf("����������������롣");
			break;
		}
	}
	return 0;
}