#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <locale.h>
int t1_1()
{
	char c;
	printf("Введите символы 'a' or 'b': ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
}
int t1_2()
{
	char c;
	printf("Введите символ: ");
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
		printf("\n Это цифра");
		break;
	default:
		printf("\n Это буква");
	}
	return 0;
}
void t2() {
	char c;
	float x, y;
	printf("Введите выражение, состоящее из двух переменных: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("\nСложение %.2f с %.2f = %.2f", x, y, x + y);
		break;
	case '*':
		printf("\nУмножение %.2f на %.2f = %.2f", x, y, x * y);
	    break;
	case '/':
		printf("\nДеление %.2f на %.2f = %.2f", x, y, x / y);
		break;
	
	case '-':
		printf("\nВычитание %.2f из %.2f = %.2f", x, y, x - y);
		break;
	case '^':
		printf("\nВозведение %.2f в %.2f степень = %.2f", x, y, pow(x, y));
		break;
	default:
		printf("\nНеверный ввод выражения");
	}
}
int t3_11()
{
	int c;
	printf("Введите число от 1 до 12: ");
	scanf("%d", &c);
	switch (c)
	{
	case 1: 
		printf("Римская запись числа: I");
		break;
	case 2:
		printf("Римская запись числа: II");
		break;
	case 3:
		printf("Римская запись числа: III");
		break;
	case 4:
		printf("Римская запись числа: IV");
		break;
	case 5:
		printf("Римская запись числа: V");
		break;
	case 6:
		printf("Римская запись числа: VI");
		break;
	case 7:
		printf("Римская запись числа: VII");
		break;
	case 8:
		printf("Римская запись числа: VIII");
		break;
	case 9:
		printf("Римская запись числа: IX");
		break;
	case 10:
		printf("Римская запись числа: X");
		break;
	case 11:
		printf("Римская запись числа: XI");
		break;
	case 12:
		printf("Римская запись числа: XII");
		break;
	default:
		printf("\n Неверный ввод числа");
	}
	return 0;
}


void main()
{
	setlocale(LC_ALL, "RUS");
	t3_11();
}