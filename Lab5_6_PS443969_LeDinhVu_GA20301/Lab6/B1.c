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

    float tong = 0;
    int count = 0;

    for (int i = 0; i < n; i++) { // 
        if (mang[i] % 3 == 0) { 
            tong += mang[i];   
            count++;           
        }
    }

    if (count > 0) {
        float tb = tong / count;
        printf("Gia tri trung binh cho cac so cho 3 la: %.2f\n", tb);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}
