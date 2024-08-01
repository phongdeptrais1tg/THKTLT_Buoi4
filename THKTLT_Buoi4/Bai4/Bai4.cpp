#include <stdio.h>


int calculate_sequence_a(int n) {
    int A[100];  
    A[0] = 1;
    A[1] = 0;
    A[2] = -1;

    for (int i = 3; i <= n; i++) {
        A[i] = 2 * A[i - 1] - 3 * A[i - 2] - A[i - 3];
    }
    return A[n];
}


int calculate_sequence_b(int n) {
    int A[100];  
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;

    for (int i = 4; i <= n; i++) {
        A[i] = 2 * A[i - 1] + A[i - 2] - 3 * A[i - 3];
    }
    return A[n];
}


void menu() {
    int choice, n;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Tinh so hang thu n cua day A \n");
        printf("2. Tinh so hang thu n cua day B \n");
        printf("3. Thoat\n");
        printf("Nhap lua chon cua ban (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap so thu tu n (n >= 0): ");
            scanf("%d", &n);
            if (n < 0) {
                printf("So thu tu n phai lon hon hoac bang 0.\n");
            }
            else {
                printf("Gia tri phan tu thu %d cua day A la: %d\n", n, calculate_sequence_a(n));
            }
            break;
        case 2:
            printf("Nhap so thu tu n (n >= 1): ");
            scanf("%d", &n);
            if (n < 1) {
                printf("So thu tu n phai lon hon hoac bang 1.\n");
            }
            else {
                printf("Gia tri phan tu thu %d cua day B la: %d\n", n, calculate_sequence_b(n));
            }
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
