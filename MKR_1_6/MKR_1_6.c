// Mkr1_6.c: Обчислення функції за окремими рівняннями в залежності від введених даних.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

double F;
int main()
{
	double x;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть дiсне число:");
	printf("\n Значення a=");
	scanf("%lf", &x);
	if (x > 0) F = pow(x, 2) + 5 * x - 6;
	else F = abs(x + cos(x));

	printf("\n При заданому а=%.3lf значення обрахунку F= %.3lf", x, F);
	int getch(); getch();
	return 0;
}
