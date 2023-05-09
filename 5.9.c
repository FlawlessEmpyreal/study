#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(void* base, int num, int width,int(*cmp)(const void*e1, const void*e2))
{
	for (int i = 0; i < num - 1; i++)//�ܹ�����
	{
		for (int j = 0; j < num - 1 - i; j++)//��ǰ������Ҫ�ȽϵĴ���
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//�ȽϺ���Ҫ�ûص�����,��Ϊ���Զ���ɷ�
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);//���ֽ�������          ��仰������
			}
		}
	}
}

int cmp(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char*e1, char*e2, int width)
{
	char tmp;
	for (int i = 0; i < width; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[0]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width_1 = sizeof(arr[0]);
	bubble_sort(arr,sz,width_1,cmp);

	return 0;
}