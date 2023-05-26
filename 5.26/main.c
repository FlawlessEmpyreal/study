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
		assert(c.date[999].age == 0);//最后一个必须为0,方便之前的删除
		menu();
		printf("请输入操作指令");
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
			printf("输入错误，请重新输入。");
			break;
		}
	}
	return 0;
}