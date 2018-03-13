#include<iostream>
#include<locale.h>
#include"Header.h"
#include<time.h>
int i, j;
int *abc(int *a, int *b)//возвращает указатель
{
	//int x=5;
	//return &x;//так делать нельзя. Переменная живет от { до };
	if (*a < *b)
		return b;
	else
		return a;
}
void znachenie(int *a)
{
	if (*a < 0)
		printf("число отрицательное\n");
	else
		printf("число положительное\n");
}
void ZappBiMass(int (*mass)[5], int val)
{
	for (i = 0;i < val;i++)
	{
		for (j = 0;j < val;j++)
		{
			*(*(mass + i) + j) = 0 + rand() % 100;
		}
	}
}
void PrintBiMass (int (*mass)[5],int row)
{
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < row;j++)
		{
			printf("%d\t", *((*mass + i) + j));
		}
		printf("\n");
	}
}
void SummBiMass(int(*mass)[5], int row)
{
	int min = *mass[0];
	int max = *mass[0];
	int summ = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < row;j++)
		{
			  summ += *((*mass + i) + j);
			if (*((*mass + i) + j) < min)
				min = *((*mass + i) + j);
			if (*((*mass + i) + j) > max)
				max = *((*mass + i) + j);
		}
	}
	printf("сумма всех чисел массива = %d\n", summ);
	printf("среднее арифмитическое массива = %d\n", summ / 25);
	printf("максимальное число = %d\n", max);
	printf("минимальное число = %d\n", min);
}
void ZappMass(int *mass, int row)
{
	for (i = 0;i < row;i++)
	{
		*(mass + i) = 0 + rand() % 20;
	}
}
void PrintMass(int *mass, int row)
{
	for (i = 0;i < row;i++)
	{
		printf("%d\t", *(mass + i));
	}
	printf("\n---------------------------\n");
}
void summMassInMass(int *mass1, int *mass2, int *mass3,int *mass4, int row)
{
	int chek = 0;
	int a,b;
	for (i = 0;i < row;i++)
	{
		a = *(mass1 + i) / 10;
		b = *(mass1 + i) % 10;
		*(mass3 + chek) = a + b;
		*(mass4 + i) = *(mass1 + i) + *(mass2 + i);
		chek++;
	}
	for (i = 0;i < row;i++)
	{
		a = *(mass2 + i) / 10;
		b = *(mass2 + i) % 10;
		*(mass3 + chek) = a + b;
		chek++;
	}
}
int Rec1(int a)
{
	if (a == 0)
		return 1;
	return a*Rec1(a-1);
}
int Rec2(int a, int stepen)
{
	if (stepen == 0)
		return a;
	return a * Rec2(a, stepen - 1);
}
