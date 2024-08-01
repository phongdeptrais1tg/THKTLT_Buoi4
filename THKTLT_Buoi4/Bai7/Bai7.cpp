#include <stdio.h>


int fibonacci_recursive(int n) {
    if (n <= 2) {
        return 1;
    }
    else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n;

    printf("Nhap so thu tu n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Nhap sai. So n phai lon hon hoac bang 1.\n");
    }
    else {
        printf("So Fibonacci thu %d la: %d\n", n, fibonacci_recursive(n));
    }

    return 0;
}
