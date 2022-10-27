#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>
#define M_PI 3.14159265358979323846
float ch(float x, float y, float z)
{
	float ch1;
	ch1 = ((pow(cos(y),3)) * (fabs(x - y)) * (1 + (pow(sin(z), 2)) / sqrt(x + y)));
	return ch1;
}
float zn(float x, float y, float e)
{
	float zn1;
	zn1 = ((pow(e, fabs(x - y))) + (x / 2));
	return zn1;
}
float b1(float x, float y, float ch1, float zn1)
{
	float b;
	b = ((pow(y, pow(fabs(x), 1 / 3))) + (pow(cos(y), 3) * (ch1 / zn1)));
	return b;
}
void main()
{




	setlocale(LC_ALL, "RUS");
	float x, y, z, b, e, ch1, zn1;
	e = 2.718;
	printf("¬ведите значение x:");
	scanf("%f", &x);
	printf("¬ведите значение y:");
	scanf("%f", &y);
	printf("¬ведите значение z:");
	scanf("%f", &z);
	ch1 = ch(x, y, z);
	zn1 = zn(x, y, e);
	b = b1(x, y, ch1, zn1);
	printf("%.4f", b);
}