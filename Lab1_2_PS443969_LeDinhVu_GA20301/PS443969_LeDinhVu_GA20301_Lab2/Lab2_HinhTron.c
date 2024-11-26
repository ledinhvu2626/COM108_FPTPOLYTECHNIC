#include <stdio.h>
const float Pi=3.14;
//#define Pi 3.14 //khai bao hang so pi
int main()
{
    // chuong trinh tinh chu vi hinh tron //
    float BanKinh;
    printf("nhap ban kinh hinh tron = ");
    scanf("%f", &BanKinh);
    float ChuVi = 2 * Pi * BanKinh ;
    printf("chu vi hinh tron co ban kinh %.2f la %.2f\n",BanKinh, ChuVi);
    return 0;
}
