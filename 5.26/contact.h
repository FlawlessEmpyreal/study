#include <string.h>
#include <assert.h>
#include <stdio.h>

struct contact
{
	char name[20];
	int age;
	char phonum[12];
	char sex[10];
};

 struct con
{
	struct contact date[1000];
	int sz;//ͨѶ¼���Ѵ������
};

 enum Config
 {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	SHOW,
	MODIFY
 };

void Init_contact(struct con *pc);//��ʼ��ͨѶ¼
void Add_contact(struct con*pc);//ͨѶ¼�����
int search(struct con *pc, char *input_name);//��������Ѱ��,���ҷ����±�ֵ
void Del_contact(struct con *pc);//������ɾ��
void Show_contact(struct con *pc);//��ʾ�����˵���Ϣ
void Modify_contact(struct con *pc);//�޸���Ϣ
