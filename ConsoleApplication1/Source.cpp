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
			/*1.	Используя указатели и оператор разыменования, 
			определить наибольшее из двух чисел.*/
			int a = 10;
			int b = 20;
			int *c = abc(&a, &b);
			printf("адресс %p наибольшего элемента %d\n", c, *c);
		}
		break;
		case 2:
		{
			/*2.	Используя указатели и оператор разыменования, 
			определить знак числа, введённого с клавиатуры.*/
			int a;
			int *b = NULL;
			b = &a;
			printf("введите число: ");
			scanf("%d", &a);
			znachenie(b);
		}
		break;
		case 3:
		{
			/*В двухмерном массиве целых числе посчитать:
				++a)	сумму всех элементов массива
				++b)	среднее арифметическое всех элементов массива
				c)	минимальный элемент
				d)	максимальный элемент
			*/
			int mass[5][5];
			ZappBiMass(mass, 5);
			PrintBiMass(mass, 5);
			SummBiMass(mass, 5);
		}
		break;
		case 4:
		{
			/*2.	 *Напишите программу, в которой объявляется три массива одинакового размера. 
			Первые два массива заполняются случайными числами в диапазоне от 0 до 20,
			третий массив заполняется как поэлементная сумма элементов первых двух массивов.
			Содержимое всех трех массивов выводиться на консоль.*/
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
			/*1.	Написать рекурсивную функцию для вычисления факториала натурального числа n.*/
			int a;
			printf("введите число: ");
			scanf("%d", &a);
			printf("%d", Rec1(a));
		}
		break;
		case 6:
		{
			/*2.	В некоторых языках программирования
			(например, в Паскале) не преду- смотрена операция возведения 
			в степень. Написать рекурсивную функцию для расчета степени
			n вещественного числа a (n — натуральное число).*/
			int a, stepen;
			printf("введите число: ");
			scanf("%d", &a);
			printf("введите степень: ");
			scanf("%d", &stepen);
			printf("\n");
			printf("%d\n",Rec2(a, stepen));
		}
		break;
		default:printf("No exemple\n");
			break;
		}
		printf("Продолжить? 1-Yes 2-No:");
		scanf("%d",&exit);
		printf("\n");
	} while (exit == 1);
}