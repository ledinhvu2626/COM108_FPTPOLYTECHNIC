#include <stdio.h>

int main(){
    int a,b;
    
    printf("hay nhap gio bat dau (12 - 23): ");
    scanf("%d", &a);
    printf("hay nhap gio ket thuc(13 - 23): ");
    scanf("%d", &b);

    if( b > 23 || a < 12 || b < 12 || b <= a){
        printf("vui long nhap so gio dung quy dinh");
    }

    int tongsogio = b - a;
    int tongtien;

    if(tongsogio <= 3){
        tongtien = tongtien * 15000; 
    } else {
        tongtien = 3 * 15000;
        tongtien += (tongsogio - 3) * (15000 * 0.7); //30%
    }

    if (a >= 14 && a <= 17) {
        tongtien *= 0.9; //10%
    }

    printf("tong tien can thanh toan la: %d", tongtien);

    getchar();

    return 0;
}