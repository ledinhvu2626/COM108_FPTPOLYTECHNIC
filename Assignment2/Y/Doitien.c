#include <stdio.h>

void doiTien(int soTien) {
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soLuong[9] = {0}; //co 9 phan tu, gan moi phan tu gia tri = 0

    printf("So tien can doi: %d\n", soTien);
    printf("Ket qua doi tien:\n");

    for (int i = 0; i < 9; i++) {
        if (soTien >= menhGia[i]) {
            soLuong[i] = soTien / menhGia[i];
            soTien %= menhGia[i]; 
        }
        if (soLuong[i] > 0) {
            printf("%d x %d\n", soLuong[i], menhGia[i]);
        }
    }

    if (soTien > 0) {
        printf("Khong the doi het so tien.\n");
    }
}

int main() {
    int soTien;
    printf("Nhap vao so tien can doi: ");
    scanf("%d", &soTien);

    if (soTien <= 0) {
        printf("So tien khong hop le.\n");
    } else {
        doiTien(soTien);
    }

    return 0;
}
