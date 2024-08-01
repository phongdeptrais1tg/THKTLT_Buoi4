#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}


void menu() {
    int a, b;

    printf("Nhap hai so nguyen duong a va b:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Hai so phai la cac so nguyen duong.\n");
        return;
    }

    printf("UCLN(%d, %d) la: %d\n", a, b, gcd(a, b));
}

int main() {
    menu();
    return 0;
}
