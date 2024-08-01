#include <stdio.h>


int x(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 2;
    }
    else {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (n - i) * x(i);
        }
        return sum;
    }
}


void menu() {
    int n;

    printf("Nhap so n (n >= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So n phai lon hon hoac bang 0.\n");
    }
    else {
        printf("Gia tri x(%d) la: %d\n", n, x(n));
    }
}

int main() {
    menu();
    return 0;
}
