#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &mang[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang[i] < mang[j]) {

                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("Vi tri thu [%d]: %d\n", i, mang[i]);
    }

    return 0;
}
