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
	int y;
	printf("������� ���:");
	scanf("%d", &y);
	if (y % 4 == 0)
		printf("��� %d ����������", y);
	else
		printf("��� %d �� ����������", y);
}