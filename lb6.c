#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>
void t1_1()
{
	int y;
	printf("Введите год:");
	scanf("%d", &y);
	if (y % 4 == 0)
	{
		printf("високосный год\n");
		printf("Год %d високосный", y);
	}
	else
	{
		printf("невисокосный год");
		printf("Год %d не високосный", y);
	}
}
void t1_2()
{
	int y;
	printf("Введите год:");
	scanf("%d", &y);
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))

		printf("Год %d високосный", y);

	else

		printf("Год %d не високосный", y);
}
void t2_11()
{
	float F, x;
	printf("Введите x для вычисления значения функции F(x):");
	scanf("%f", &x);
	F = x >= -3.5 ? 4 * pow(x, 2) + 2 * x - 19 : (-2 * x) / (-4 * x + 1);
	printf("Значение функции F(x): %f", F);
}
void t3_11()
{
	int N, r;
	printf("Введите число N:");
	scanf(" % d", &N);
	if (N < 1000)
	{
		r = (N / 100) * (N / 10 % 10) * (N % 10);
		printf("%d", r);
		if ((r > 99) && (r < 1000))
			printf("Pезультат работы программы является трёхзначным числом");
		else
			printf("Pезультат работы программы не является трёхзначным числом");
	}
	else 
		printf("Значение числа N выходит за рамки допустимых значений");
}
void main()
{
	setlocale(LC_ALL, "RUS");
	t3_11();
}
