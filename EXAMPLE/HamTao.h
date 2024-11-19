#include <stdio.h>
#include <math.h>

void nhap(int *x){
    printf("nhap so = ");
    scanf("%d", x);
}

void tinhTong(int x, int y){
    int tong = x + y;
    printf("%d + %d = %d",x,y,tong);
}

void tinhHieu(int x, int y){

    int hieu= x - y;
    printf("%d - %d = %d",x,y,hieu);
}
