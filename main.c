//вводится 3 целых числа найти сумму всех четных
#include <stdio.h>
int main () {
    int a;
	int b;
	int c;
	int x;
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	if (a % 2 == 0 && b % 2 == 0) {
		x = a + b;
		printf ("%d %d", a, b, x);
	}
	else {
	printf ("%d", c);	
	}
	return 0;
}
