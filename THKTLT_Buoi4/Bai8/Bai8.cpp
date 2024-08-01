#include <stdio.h>


void print_fibonacci_less_than(int m) {
    if (m <= 1) {
        printf("Khong co so Fibonacci nho hon %d\n", m);
        return;
    }

    int a = 1, b = 1;
    printf("Day Fibonacci nho hon %d: \n", m);

    
    printf("%d ", a);

    
    while (b < m) {
        printf("%d ", b);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int m;

    printf("Nhap gia tri m (m > 1): ");
    scanf("%d", &m);

    if (m <= 1) {
        printf("Gia tri m phai lon hon 1.\n");
    }
    else {
        print_fibonacci_less_than(m);
    }

    return 0;
}
