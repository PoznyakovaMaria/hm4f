#include <stdio.h>
#include <locale.h>
#define C 60
#define S 50
float vr(int min, int t, int s)
{
	int sek = min * C;
	int st = t - 1;
	float v = 1.*st * s/ sek;
	return v;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int min, t, s;
	puts("������� ����� � �������");
	scanf_s("%d", &min);
	puts("������� ���-�� �������");
	scanf_s("%d", &t);
	puts("�������  ���������� � ������");
	scanf_s("%d", &s);
	printf("�������� ������ ����� %f �/�", vr(min,t,s));
}