#define  _CRT_SECURE_NO_WARNINGS 1
////��дһ���ö��ַ�����ƽ���ֲ������ֵĳ���
//#include <stdio.h>
//int main()
//{
//	int  arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, right = (sizeof(arr)/sizeof(arr[0])-1), left = 0, a = 0, mid = 0 ;//�趨ʮ������
//
//	scanf("%d", &a);//������Ҫ���ҵ�����
//	while (left<=right)//��������ֲ�����Ҫ�ҵ�������ִ�г���
//	{
//		mid = (left + right) / 2;//�趨��һ���м�ֵ
//		if (arr[mid] < a)//����������ֱȵ�һ���м�ֵҪ��ʱ
//			left = mid + 1;//��ε��м�ֵ��Ϊ�´μ������Сֵ
//		else if (arr[mid] > a)//Сʱ
//			right = mid - 1;
//		else//mid = 7ʱ����ѭ��.
//			break;
//	}
//	printf("%d\n", mid);//�����������±�
//
//	return 0;
//}


//���������м��ӡһ���ַ�
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = { "hello!world!"};//�趨Ҫ��ӡ���ַ�
//	char arr2[] = { "############" };//һ��ʼҪ���滻���ַ�
//	int right = strlen(arr1) - 1, left = 0;//�������������±�
//	while (left <= right)//ÿ���滻�����left��right���е���
//	{
//		arr2[left] = arr1[left];//�滻
//		arr2[right] = arr1[right];//�滻
//		left++;//����
//		right--;//����
//		printf("%s\n", arr2);//����˴ε���������ַ�
//		Sleep(1000);//�ӳ�һ��,ͷ�ļ���windows.h
//		system("cls");//��յ�ǰ��ʾͷ�ļ���ɶ���Ų�֪��Ϊɶ���Ҳ����
//	}
//	printf("hello!world!\n");//֮ǰ�������������ʾһ��
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	char arr1[] = { "123456" };
//	char arr2[] = { "######" };
//	while (strcmp(arr1, arr2) != 0)
//	{
//		if (i == 4)
//		{
//			printf("error");
//			break;
//		}
//		scanf("%s", arr2);
//		i++;
//	}
//	if (strcmp(arr1, arr2) == 0)
//		printf("success");
//
//	return 0;
//}


//��������Ϸ,���ַ�Χ��0��100,������������˳���Ϸ,���뷶Χ�������,�¶�����Ϸ���Զ�����ѡ���Ƿ������Ϸ

#include <time.h>
#include <windows.h>
#include <stdio.h>

int game()
{
	int num, an;//������ַ�������Ҫ��
	num = rand() % 100 + 1;//����һ���������,Ҫ��ֻ��0��100֮��
	printf("�����=%d\n", num);
	scanf("%d", &an);
	while (1)//��ʼ������һֱ�µ�������߲������Ϊֹ
	{
		if (0 <= an && an < num)
		{
			printf("��С��\n");
			scanf("%d", &an);
		}
		else if (an > num && an <= 100)
		{
			printf("�´���\n");
			scanf("%d", &an);
		}
		else if (an == num)
		{
			printf("��ϲ��,�¶���\n");
			return 1;
			break;
		}
		else//�������
		{
			printf("��;�˳���������Ϸ\n\n");
			return 0;//��������0������Ϸ
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//��ʱ������������
	int input = 0;
	do//���ѡ��ʼ��Ϸ,����ʼ��Ϸ,�������Զ�������һ��ѡ��
	{
		printf("-----��������Ϸ,���ַ�Χ��0��100,������������˳���Ϸ,�����뷶Χ�������-----\n");
		printf("-----����1��ʼ-----\n-----����0������Ϸ-----\n");
		scanf("%d", &input);//����1��ʼ,����0������Ϸ
		switch (input)//ѡ���Ƿ�ʼ��Ϸ
		{
		case 1:
//			printf("����\n\n");
//			game();//��Ϸ����
			input = game();//���ݷ���ֵ�ж��Ƿ�Ҫ�ж���Ϸ.
			break;
		case 0://����0ֱ�ӽ�����Ϸ
			break;
		default ://��������Ҫ����������
			printf("�����������������\n\n");
			break;
		}
		if (input == 0)//����Ϊ0��Ϸֱ�ӽ���������whileѭ��
			break;
		else
		{
			printf("�Ƿ������Ϸ?\n-----����1������Ϸ,����0������Ϸ-----\n\n");
			scanf("%d", &input);
		}
	} while (input != 0);
	printf("��Ϸ����\n\n");
	return 0;
}
