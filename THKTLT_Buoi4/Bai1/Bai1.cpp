#include <stdio.h>


int sum_recursive(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sum_recursive(n - 1);
    }
}


int sum_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}


void menu() {
    int choice, n;

    do {
        printf("\n MENU \n");
        printf("1. Tinh S(n) theo cach de quy\n");
        printf("2. Tinh S(n) theo cach khu de quy\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap so nguyen duong n: ");
            scanf("%d", &n);
            printf("Tong S(%d) theo cach de quy la: %d\n", n, sum_recursive(n));
            break;
        case 2:
            printf("Nhap so nguyen duong n: ");
            scanf("%d", &n);
            printf("Tong S(%d) theo cach khur de quy la: %d\n", n, sum_iterative(n));
            break;
        case 3:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }
    } while (choice != 3);
}

int main() {
    menu();
    return 0;
}
