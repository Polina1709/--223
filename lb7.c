#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <locale.h>
int t1_1()
{
	char c;
	printf("������� ������� 'a' or 'b': ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("������� 'a'.\n");
		break;
	case 'b':
		printf("������� 'b'.\n");
		break;
	default:
		printf("����������� ������\n");
	}
	return 0;
}
int t1_2()
{
	char c;
	printf("������� ������: ");
	scanf("%c", &c);
	switch (c) 
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("\n ��� �����");
		break;
	default:
		printf("\n ��� �����");
	}
	return 0;
}
void t2() {
	char c;
	float x, y;
	printf("������� ���������, ��������� �� ���� ����������: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("\n�������� %.2f � %.2f = %.2f", x, y, x + y);
		break;
	case '*':
		printf("\n��������� %.2f �� %.2f = %.2f", x, y, x * y);
	    break;
	case '/':
		printf("\n������� %.2f �� %.2f = %.2f", x, y, x / y);
		break;
	
	case '-':
		printf("\n��������� %.2f �� %.2f = %.2f", x, y, x - y);
		break;
	case '^':
		printf("\n���������� %.2f � %.2f ������� = %.2f", x, y, pow(x, y));
		break;
	default:
		printf("\n�������� ���� ���������");
	}
}
int t3_11()
{
	int c;
	printf("������� ����� �� 1 �� 12: ");
	scanf("%d", &c);
	switch (c)
	{
	case 1: 
		printf("������� ������ �����: I");
		break;
	case 2:
		printf("������� ������ �����: II");
		break;
	case 3:
		printf("������� ������ �����: III");
		break;
	case 4:
		printf("������� ������ �����: IV");
		break;
	case 5:
		printf("������� ������ �����: V");
		break;
	case 6:
		printf("������� ������ �����: VI");
		break;
	case 7:
		printf("������� ������ �����: VII");
		break;
	case 8:
		printf("������� ������ �����: VIII");
		break;
	case 9:
		printf("������� ������ �����: IX");
		break;
	case 10:
		printf("������� ������ �����: X");
		break;
	case 11:
		printf("������� ������ �����: XI");
		break;
	case 12:
		printf("������� ������ �����: XII");
		break;
	default:
		printf("\n �������� ���� �����");
	}
	return 0;
}


void main()
{
	setlocale(LC_ALL, "RUS");
	t3_11();
}