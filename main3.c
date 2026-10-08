//Напечатай числа от 1 до 100, но только те, что делятся на 5.
#include <stdio.h>
int main (void) {
    int a;
    a = 1;
    while (a <= 100) {
        if (a % 5 == 0) {
            printf ("%d ", a);
        }
        a = a + 1;
    }
    return 0;
}
