#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Init_contact(struct con*pc)
{
	assert(pc);
	memset(pc->date, 0, sizeof(pc->date));
	pc->sz = 0;
}



void Add_contact(struct con *pc)//增加通讯录
{
	assert(pc);
	if (pc->sz == 999)
	{
		printf("通信录已满\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入电话号码:>");
	scanf("%s", pc->date[pc->sz].phonum);
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->sz].sex);
	pc->sz++;
}

void Show_contact(struct con *pc)//查看所有通讯录的功能,方便调试
{
	/*printf("%-20姓名");
	printf("%-5年龄");
	printf("%-13电话");
	printf("%-10性别");*/
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s", pc->date[i].name);
		printf("%-5d", pc->date[i].age);
		printf("%-13s", pc->date[i].phonum);
		printf("%-10s", pc->date[i].sex);
		printf("\n");
	}
}

int Search(struct con *pc , char *input_name)//按照名字寻找,并且返回下标值
{
	for (int i = 0; i < pc->sz; i++)
	{
		if(strcmp((pc->date[i].name), input_name)==0)
			return i;
	}
}

void Del_contact(struct con *pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录空,无法删除\n");
		return;
	}
	printf("请输入删除人的姓名:>");
	char del_name[20];
	scanf("%s", del_name);
	int index;//要删除的角色的下标
	index = Search(pc, del_name);
	for (int i = index; i < pc->sz; i++)
	{
		strcpy(pc->date[i].name, pc->date[i + 1].name);
		pc->date[i].age = pc->date[i + 1].age;
		strcpy(pc->date[i].phonum , pc->date[i + 1].phonum);
		strcpy(pc->date[i].sex , pc->date[i + 1].sex);
	}
	pc->sz--;
}

void Search_contact(struct con *pc)//按姓名查找资料
{
	assert(pc);
	printf("请输入要查找人的姓名:>");
	char input_name[20];
	scanf("%s", input_name);
	int ret = Search(pc, input_name);
	printf("%-20s", pc->date[ret].name);
	printf("%-5d", pc->date[ret].age);
	printf("%-13s", pc->date[ret].phonum);
	printf("%-10s", pc->date[ret].sex);
	printf("\n");
}

void Modify_contact(struct con *pc)
{
	assert(pc);
	printf("请输入要修改信息人的姓名;>");
	char modify_name[20];
	scanf("%s", modify_name);
	int ret = Search(pc, modify_name);
	printf("请输入修改后的姓名:>");
	scanf("%s", pc->date[ret].name);
	printf("请输入修改后的年龄:>");
	scanf("%d", &(pc->date[ret].age));
	printf("请输入修改后的电话号码:>");
	scanf("%s", pc->date[ret].phonum);
	printf("请输入修改后的性别:>");
	scanf("%s", pc->date[ret].sex);
}