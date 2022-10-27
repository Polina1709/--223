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
	printf("¬ведите массу первого тела:");
	scanf("%f", &m1);
	printf("¬ведите массу второго тела:");
	scanf("%f", &m2);
	printf("¬ведите рассто€ние между телами:");
	scanf("%f", &r);
	F = ft(m1, m2, r);
	printf("—ила прит€жени€ тел: %15.8f", F);
}