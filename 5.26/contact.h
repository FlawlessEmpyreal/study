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
	int sz;//通讯录中已存放数量
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

void Init_contact(struct con *pc);//初始化通讯录
void Add_contact(struct con*pc);//通讯录的添加
int search(struct con *pc, char *input_name);//按照名字寻找,并且返回下标值
void Del_contact(struct con *pc);//按名字删除
void Show_contact(struct con *pc);//显示所有人的信息
void Modify_contact(struct con *pc);//修改信息
