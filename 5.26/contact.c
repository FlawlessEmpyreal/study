#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Init_contact(struct con*pc)
{
	assert(pc);
	memset(pc->date, 0, sizeof(pc->date));
	pc->sz = 0;
}



void Add_contact(struct con *pc)//����ͨѶ¼
{
	assert(pc);
	if (pc->sz == 999)
	{
		printf("ͨ��¼����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("������绰����:>");
	scanf("%s", pc->date[pc->sz].phonum);
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->sz].sex);
	pc->sz++;
}

void Show_contact(struct con *pc)//�鿴����ͨѶ¼�Ĺ���,�������
{
	/*printf("%-20����");
	printf("%-5����");
	printf("%-13�绰");
	printf("%-10�Ա�");*/
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s", pc->date[i].name);
		printf("%-5d", pc->date[i].age);
		printf("%-13s", pc->date[i].phonum);
		printf("%-10s", pc->date[i].sex);
		printf("\n");
	}
}

int Search(struct con *pc , char *input_name)//��������Ѱ��,���ҷ����±�ֵ
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
		printf("ͨѶ¼��,�޷�ɾ��\n");
		return;
	}
	printf("������ɾ���˵�����:>");
	char del_name[20];
	scanf("%s", del_name);
	int index;//Ҫɾ���Ľ�ɫ���±�
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

void Search_contact(struct con *pc)//��������������
{
	assert(pc);
	printf("������Ҫ�����˵�����:>");
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
	printf("������Ҫ�޸���Ϣ�˵�����;>");
	char modify_name[20];
	scanf("%s", modify_name);
	int ret = Search(pc, modify_name);
	printf("�������޸ĺ������:>");
	scanf("%s", pc->date[ret].name);
	printf("�������޸ĺ������:>");
	scanf("%d", &(pc->date[ret].age));
	printf("�������޸ĺ�ĵ绰����:>");
	scanf("%s", pc->date[ret].phonum);
	printf("�������޸ĺ���Ա�:>");
	scanf("%s", pc->date[ret].sex);
}