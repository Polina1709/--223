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
	printf("¬ведите переменную типа char:");
	scanf("%c", &c);
	getchar();
	printf("¬ведите переменную типа int:");
	scanf("%d", &i); 
	getchar(); 
	printf("¬ведите переменную типа float:");
	scanf("%f", &f);
	getchar(); 
	printf("¬ведите переменную типа double:");
	scanf("%lf", &d);
	getchar();
    printf("÷ела€ и дробна€ часть вещественного числа: %d  %f\n", (int)f, f-(int)f);
	printf("Ўестнадцатиричный и дес€тичный код символа: %x  %d\n", (int)c, (int)c);
	printf("ƒес€тичное число, соответствующее 1/i: %f\n", 1./i);
    
	


}