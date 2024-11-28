#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu [%d]: ", i);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    int min = mang[0];

    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i]; 
        }
        if (mang[i] < min) {
            min = mang[i]; 
        }
    }

    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    return 0;
}
