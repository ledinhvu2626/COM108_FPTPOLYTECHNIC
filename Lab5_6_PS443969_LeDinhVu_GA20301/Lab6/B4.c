#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so hang cua ma tran (n): ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran (m): ");
    scanf("%d", &m);

    int mang[n][m];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phan tu cua cac vi tri [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("Ma tran binh phuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", mang[i][j] * mang[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
