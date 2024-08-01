#include <stdio.h>


int count_digits(int n) {
    int count = 0;

    
    while (n > 0) {
        count++;
        n /= 10;  
    }

    return count;
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nhap sai. So phai la nguyen duong.\n");
    }
    else {
        printf("So chu so cua %d la: %d\n", n, count_digits(n));
    }

    return 0;
}
