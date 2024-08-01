#include <stdio.h>


int nth_term_recursive(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return nth_term_recursive(a, r, n - 1) + r;
    }
}


int nth_term_iterative(int a, int r, int n) {
    return a + (n - 1) * r;
}


void menu() {
    int choice, a, r, n;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Tinh gia tri phan tu thu n theo cach de quy\n");
        printf("2. Tinh gia tri phan tu thu n theo cach khur de quy\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon cua ban (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap hang dau (a): ");
            scanf("%d", &a);
            printf("Nhap cong sai (r): ");
            scanf("%d", &r);
            printf("Nhap so thu tu (n): ");
            scanf("%d", &n);
            if (n < 1) {
                printf("So thu tu n phai lon hon hoac bang 1.\n");
            }
            else {
                printf("Gia tri phan tu thu %d theo cach de quy la: %d\n", n, nth_term_recursive(a, r, n));
            }
            break;
        case 2:
            printf("Nhap hang dau (a): ");
            scanf("%d", &a);
            printf("Nhap cong sai (r): ");
            scanf("%d", &r);
            printf("Nhap so thu tu (n): ");
            scanf("%d", &n);
            if (n < 1) {
                printf("So thu tu n phai lon hon hoac bang 1.\n");
            }
            else {
                printf("Gia tri phan tu thu %d theo cach khur de quy la: %d\n", n, nth_term_iterative(a, r, n));
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
