#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>
float c(float Vc, float Vp)
{
	float cos;
	cos = Vc / Vp;
	return cos;
}
float sp(float H, float cos)
{
	float S;
	S = H / cos;
	return S;
}


void main()

{
	float Vc, Vp, H, cos, S;
	setlocale(LC_ALL, "RUS"); 
	printf("������� �������� �������:");
	scanf("%f", &Vc);
	printf("������� �������� ������:");
	scanf("%f", &Vp);
	printf("������� ������ ����� �������:");
	scanf("%f", &H);
	cos = c(Vc, Vp);
	S = sp(H, cos);
	if ((cos < -1) && (cos > 1))
	{
		puts("��� ������");
	}
	else
	{
		printf("��������� ��������� ���� �� �������� ���������:%f", S);
	}

}