#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>

void main()

{
	setlocale(LC_ALL, "RUS");
	double Vc, Vp, H, cos, S;
	printf("Введите скорость самолёта:");
	scanf("%lf", &Vc);
	getchar();
	printf("Введите скорость ракеты:");
	scanf("%lf", &Vp);
	getchar();
	printf("Введите высоту самолёта над землёй:");
	scanf("%lf", &H);
	getchar();
	cos = Vc / Vp;
	S = H / cos;
	if ((cos < -1)|(cos > 1))
	{
		puts("Нет решения");
	}
	else
	{
		printf("Дальность полёта ракеты равна:%lf", S);
	}

}