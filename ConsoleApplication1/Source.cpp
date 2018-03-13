#include<iostream>
#include<locale.h>
#include"Header.h"
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		printf("please enter exemple: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.	��������� ��������� � �������� �������������, 
			���������� ���������� �� ���� �����.*/
			int a = 10;
			int b = 20;
			int *c = abc(&a, &b);
			printf("������ %p ����������� �������� %d\n", c, *c);
		}
		break;
		case 2:
		{
			/*2.	��������� ��������� � �������� �������������, 
			���������� ���� �����, ��������� � ����������.*/
			int a;
			int *b = NULL;
			b = &a;
			printf("������� �����: ");
			scanf("%d", &a);
			znachenie(b);
		}
		break;
		case 3:
		{
			/*� ���������� ������� ����� ����� ���������:
				++a)	����� ���� ��������� �������
				++b)	������� �������������� ���� ��������� �������
				c)	����������� �������
				d)	������������ �������
			*/
			int mass[5][5];
			ZappBiMass(mass, 5);
			PrintBiMass(mass, 5);
			SummBiMass(mass, 5);
		}
		break;
		case 4:
		{
			/*2.	 *�������� ���������, � ������� ����������� ��� ������� ����������� �������. 
			������ ��� ������� ����������� ���������� ������� � ��������� �� 0 �� 20,
			������ ������ ����������� ��� ������������ ����� ��������� ������ ���� ��������.
			���������� ���� ���� �������� ���������� �� �������.*/
			int a[10];
			int b[10];
			int c[20];
			int d[10];
			ZappMass(a, 10);
			ZappMass(b, 10);
			PrintMass(a, 10);
			PrintMass(b, 10);
			summMassInMass(a, b, c,d, 10);
			PrintMass(c, 20);
			PrintMass(d, 10);
		}
		break;
		case 5:
		{
			/*1.	�������� ����������� ������� ��� ���������� ���������� ������������ ����� n.*/
			int a;
			printf("������� �����: ");
			scanf("%d", &a);
			printf("%d", Rec1(a));
		}
		break;
		case 6:
		{
			/*2.	� ��������� ������ ����������������
			(��������, � �������) �� �����- �������� �������� ���������� 
			� �������. �������� ����������� ������� ��� ������� �������
			n ������������� ����� a (n � ����������� �����).*/
			int a, stepen;
			printf("������� �����: ");
			scanf("%d", &a);
			printf("������� �������: ");
			scanf("%d", &stepen);
			printf("\n");
			printf("%d\n",Rec2(a, stepen));
		}
		break;
		default:printf("No exemple\n");
			break;
		}
		printf("����������? 1-Yes 2-No:");
		scanf("%d",&exit);
		printf("\n");
	} while (exit == 1);
}