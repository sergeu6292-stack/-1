//Найти махимальное число из 4 Выполнил Мартиросян Сергей группа 201ИС-25 08.10.2026
#include <stdio.h>
#include <locale.h>
int main () {
    int a;
	int b;
	int c;
	int z;
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	scanf ("%d", &z);
	setlocale(LC_ALL, "Russian");
	if (a >= b && a >=c && a >= z) {
		printf ("Максимум: %d\n", a);
	}
	else if (b >= a && b >= c && b >= z) {
			printf ("Максимум: %d\n", b);
	}
	else if (c >= a && c >= b && c >= z) {
			printf ("Максимум: %d\n", c);
	}
	else {
			printf ("Максимум: %d\n", z);
	}
	return 0;
}
