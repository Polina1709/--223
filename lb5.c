#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>
#define M_PI 3.14159265358979323846
void main()
{




	setlocale(LC_ALL, "RUS");
	/*float gr, rad;
	puts("Программа вычисления синуса");
	printf("Введите градус:");
	scanf("%f", &gr);
	rad = gr * M_PI/180;
	printf("Результат sin %.2f градусов:%.6f", gr, sin(rad));

	float x, y, a, b, p, k;
	float e = 2.7182;
	p = 2.6;
	puts("Программа вычисления функции");
	printf("Введите x:");
	scanf("%f", &x);
	a = pow(p, 3) + pow(x, 3);
	k = sqrt((p + x));
	b = pow(e, k);
	y = pow(b, 3) / pow(a, 2);
	printf("Результат вычисления функции:%.2f", y);

	int A, B, C;
	float x, y, p, a, b, k;
	float e = 2.7182;
	p = 2.6;
	x = 0.00002;
	a = pow(p, 3) + pow(x, 3);
	k = sqrt((p + x));
	b = pow(e, k);
	y = pow(b, 3) / pow(a, 2);
	A = (int)a;
	B = (int)b;
	C = (int)y;
	if ((A % 2 == 0) && (B % 2 == 1) || (A % 2 == 1) && (B % 2 == 0))
		puts("Условие выполнено 1");
	else
		puts("Условие не выполнено 0");
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
		puts("Условие выполнено 1");
	else
		puts("Условие не выполнено 0");*/
	float x, y, z, b, e, ch1, zn1;
	e = 2.718;
	printf("Введите значение x:");
	scanf("%f", &x);
	getchar();
	printf("Введите значение y:");
	scanf("%f", &y);
	getchar();
	printf("Введите значение z:");
	scanf("%f", &z);
	getchar();
	ch1 = ((fabs(x - y)) * (1 + (pow(sin(z), 2)) / sqrt(x + y)));
	zn1 = ((pow(e, fabs(x - y))) + (x / 2));
	b = ((pow(y, pow(fabs(x), 1 / 3))) + (pow(cos(y), 3) * (ch1 / zn1)));
	printf("%.4f", b);
}