#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, n = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		if (i % 2 == 1)
//		{
//			if (i % 3 == 0 && i % 5 != 0)
//			{
//				printf("%d,",i);
//				n++;
//				if (n % 8 == 0)
//					printf("\n");
//			}
//
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N, i, b;
//	char a;
//	scanf("%d%c", &N, &a);
//	for (i = 1; i <= 2 * N - 1; i++)
//	{
//		if (i <= N)//��ӡ�ϰ���
//		{
//			b = N - i;//���еĿո���
//			for (int j = 1; j <= b; j++)//��ӡ�ո�
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 2 * i - 1; k++)//��ӡ�ַ�
//			{
//				printf("%c", a);
//			}
//			printf("\n");
//		}
//		if (i>N)
//		{
//			b = i - N;
//			for (int j = 1; j <= b; j++)//��ӡ�ո�
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 4 * N - 2 * i - 1; k++)
//			{
//				printf("%c", a);
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i<5; i++)
//	{
//		for (int j = 0; j<15; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			printf("%c", 36);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int N, i, b;
//	char a;
//	for (i = 1; i <= 2 * 4 - 1; i++)
//	{
//		if (i <= 4)//��ӡ�ϰ���
//		{
//			b = 6 - i;//���еĿո���
//			for (int j = 1; j <= b; j++)//��ӡ�ո�
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 2 * i - 1; k++)//��ӡ�ַ�
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//		}
//		if (i>4)
//		{
//			b = i - 2;
//			for (int j = 1; j <= b; j++)//��ӡ�ո�
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 4 * 4 - 2 * i - 1; k++)
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N;
//	double  L;
//	scanf("%d %lf", &N, &L);
//	switch (N)
//	{
//	case 92:
//		printf("%d %.2lf", 92, L*6.86);
//		break;
//	case 95:
//		printf("%d %.2lf", 95, L*7.45);
//		break;
//	case 98:
//		printf("%d %.2lf", 98, L*8.16);
//		break;
//	default:
//		printf("Not available!");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, k = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 2 != 0 && i % 3 == 0 && i % 5 != 0)
//		{
//			printf("%d,", i);
//			k++;
//			if (k%8==0)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;//��������
//	int b = 1;//ĸ������
//	int c;//С������
//	int i = 0;//������
//	int n1 = 5 * a;//����Ǯ
//	int n2 = 3 * b;//ĸ��Ǯ
//	int d;//���깫����Ǯʣ�µ�Ǯ
//	int e;//��ʱ������ĸ��������
//	int f;//����ĸ��ʣ�µ�Ǯ
//	int n;//n�ַ�����
//	scanf("%d", &n);
//		for (a = 1; a<20; a++)
//		{
//			d = 100 - 5*a;//���깫����Ǯʣ�µ�Ǯ
//			e = d / 3;//��ʱ������ĸ��������
//			for (b = 1; b <= e; b++)
//			{
//				f = d - 3 * b;//����ĸ������ĸ��ʣ�µ�Ǯ
//				c = 3 * f;//С��������
//				if (a + b + c == 100)
//				{
//					printf("%d %d %d\n", a, b, c);
//					i++;
//				}
//				if (i == n)
//				{
//					break;
//				}
//			}
//			if (i == n)
//			{
//				break;
//			}
//		}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int x;//����
	int total;//һ��
	int i;//5��Ӳ��
	int a;//�ȶ�����5�ֺ�ʣ�µ�
	int j;//2��Ӳ��
	int b;//����2���Ժ�ʣ�µ�
	int n = 0;//����
	scanf("%d", &x);
	for (i = 19; i >= 1; i--)
	{
		if (x > 5 * i)
		{
			a = x%5*i;//�ȶ�����5�ֺ�ʣ�µ�
			int j1 = a / 2;//��໻j1��2��Ӳ��
			for (j = j1; j >= 1; j--)
			{
				b = a%2*j;//һ��Ӳ������
				if (b == 0)
					continue;
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, b, i + j + b);
				n++;
			}
		}
	}
	printf("count = %d", n);
	return 0;
}