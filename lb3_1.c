#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define G 6.61 * pow(10, -11)
float ft(float m1, float m2, float r)
{
	float F;
	F = G * m1 * m2 / (r * r);
	return F;
}




void main()
{	float m1, m2, r, F;
	setlocale(LC_ALL, "RUS");
	printf("������� ����� ������� ����:");
	scanf("%f", &m1);
	printf("������� ����� ������� ����:");
	scanf("%f", &m2);
	printf("������� ���������� ����� ������:");
	scanf("%f", &r);
	F = ft(m1, m2, r);
	printf("���� ���������� ���: %15.8f", F);
}