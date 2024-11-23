//#include <stdio.h>
//#include <math.h>
#include <HamTao.h>

int main(){
    int a,b,c,d;
    nhap(&a);
    nhap(&b);
    nhap(&c);
    nhap(&d);
    tinhTong(a,b);
    tinhTong(c,d);
    tinhHieu(a,b);
    tinhHieu(c,d);
    
    printf("\n%d + %d = %d\n", a, b,tinhTong(a,b));
    printf("\n%d + %d = %d\n", a, b,tinhTong(c,d));    
    printf("\n%d + %d = %d\n", a, b,tinhHieu(a,b));
    printf("\n%d + %d = %d\n", a, b,tinhHieu(c,d));

    int TongChung = tinhtong(a,b) + tinhtong(c,d)

    return 0;
}