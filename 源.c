#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	scanf("%d %d %d",&num1,&num2,&num3);
//	if (num1 > num2&&num1 > num3)
//	{
//		if (num2 > num3)
//			printf("%d %d %d", num1, num2, num3);
//		else
//			printf("%d %d %d", num1, num3, num2);
//	}
//	else if(num2 > num1&&num2 > num3)
//	{
//		if (num1 > num3)
//			printf("%d %d %d", num2, num1, num3);
//		else
//			printf("%d %d %d", num2, num3, num1);
//	}
//	else if (num3 > num1&&num3 > num2)
//	{
//		if (num1 > num2)
//			printf("%d %d %d", num3, num1, num2);
//		else
//			printf("%d %d %d", num3, num2, num1);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{	
//	int a = 0;
//	int i = 1;
//	for (i = 1; i < 100; i++)//��1ѭ����99��
//	{
//		if (i % 3 == 0)//Ѱ�ҿ��Ա�������������.
//		{
//			printf("%d\n", i);
//			a += 1;//ÿ��ifѭ������ִ��һ���Լ�.
//		}
//	}
//	printf("һ����%d������",a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a);
//		if (b < a)
//			b = a;
//	}
//	printf("%d", b);
//		
//	return 0;
//}


////дһ����100-200֮�������ĳ���.
//#include <stdio.h>
//int main()
//{
//	int i = 101,a=2;//��ʼ����101,2��Ϊ��һ��������
//	for (i = 101; i < 200; i++)//��101ѭ����199.
//	{	
//		a = 2;//ֱ�Ӱ�ѭ����ʼ��a��ʼ��.
//		while (a < i)//�ó������Ա��Լ�С�ı�����a,��֤��2��i-1�Ƿ���������Լ��
//		{
//			if (i%a == 0)//Ѱ�ҵ�������Լ����.
//				break;//�������ڵı������ǹ�Լ��ֱ������ѭ��,������һ�����ֵ���֤.
//			else
//				a += 1;//�������ڵ�a���ǹ�Լ����ôa+1
//		}
//		if (a == i)
//			printf("%d\n", i);//����2��i-1������i�Ĺ�Լ����ô��������,���
//	}
//	return 0;
//}

//#include <stdio.h>//�ж�ƽ������ꡣ
//int main()
//{
//	int a=1000;
//	for (a = 1000; a < 2000; a++)
//	{
//		((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//		printf("%d\n", a);
//	}
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float i;
//	float sum = 0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum = sum + 1 / i*pow(-1, i - 1);
//	}
//	printf("%f", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{ 
//	int iq;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &iq);
//		if (iq >= 140)
//			printf("genius\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = -1;
	int c;
	c = -a;
	printf("%d",c);


	return 0;
}

