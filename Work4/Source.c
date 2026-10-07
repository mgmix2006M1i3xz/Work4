#include <stdio.h>
#include <locale.h>

int maintask1() {
	char a;
	int b;
	float c;
	double d;

	puts("введите c (char): ");
	scanf_s("%c", &a);

	puts("введите i (int): ");
	scanf_s("%d", &b);

	puts("введите f (float): ");
	scanf_s("%f", &c);

	puts("введите d (double): ");
	scanf_s("%lf", &d);

	printf("%c, %d, %f, %lf\n", a, b, c, d);
	printf("целую часть: %.0f дробную часть: %f\n", c, c - (int)c);
	printf("шестнадцатеричный код: %х десятичный код: %d\n", a, a);
	printf("десятичное число: %f\n", 1 / (float)b);

	getchar();

	return 0;
}

int maintask2() {
	int a = 11;
	int b = 3;
	int x = a / b;
	float x1 = (float)a / b;
	double x2 = (double)a / b;
	printf("%d, %f, %lf\n", x, x1, x2);
	printf("%f, %lf\n", (float)a / b, (double)a / b);

	getchar();

	return 0;
}
int maintask3() {
	int N;
	puts("Введите число N: ");
	scanf_s("%d", &N);
	printf("Последняя цифра числа N: %d\n", N % 10);
	printf("Первая цифра числа N: %d\n", N / 100);
	printf("Сумма цифр числа N: %d\n", N % 10 + N / 100 + (N % 100) / 10);
	printf("Наоборот N: %d\n", N % 10, (N % 100) / 10, N / 100);
	printf("Последняя цифра %d, первая - %d, сумма цифра %d, Наоборот N: %d\n", N % 10, N / 100, N % 10 + N / 100 + (N % 100) / 10, N % 10, (N % 100) / 10, N / 100);

	getchar();

	return 0;
}

int maintask4() {

	int a, b, С;
	puts("Введите значения а, b, с через пробел: ");
	scanf_s("%d, %d, %d", &a, &b, &С);
	if ((a % 3 == 0) && (b % 3 == 0) && (С % 3 == 0)) {
		printf("Лунка идеальна для посадки!\n");
	}
	else {
		printf("Лунка не идеальна.\n");
	}

	getchar();

	return 0;
}

int main() {

	setlocale(LC_ALL, "RUS");

	//maintask1();
	system("pause");
	//maintask2();
	system("pause");
	//maintask3();
	system("pause");
	maintask4();

	return 0;

}