#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>



void main()

{
	char c;
	int i;
	float f;
	double d;
	setlocale(LC_ALL, "RUS");
	printf("������� ���������� ���� char:");
	scanf("%c", &c);
	getchar();
	printf("������� ���������� ���� int:");
	scanf("%d", &i); 
	getchar(); 
	printf("������� ���������� ���� float:");
	scanf("%f", &f);
	getchar(); 
	printf("������� ���������� ���� double:");
	scanf("%lf", &d);
	getchar();
    printf("����� � ������� ����� ������������� �����: %d  %f\n", (int)f, f-(int)f);
	printf("����������������� � ���������� ��� �������: %x  %d\n", (int)c, (int)c);
	printf("���������� �����, ��������������� 1/i: %f\n", 1./i);
    
	


}