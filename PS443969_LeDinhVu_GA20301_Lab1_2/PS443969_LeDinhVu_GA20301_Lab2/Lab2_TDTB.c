#include <stdio.h>
int main()
{
    //khai bao bien
    float diem_toan, diem_ly, diem_hoa;

    printf("nhap diem toan = ");
    scanf("%f", &diem_toan);
    printf("nhap diem ly = ");
    scanf("%f", &diem_ly);
    printf("nhap diem hoa = ");
    scanf("%f", &diem_hoa);
    float tong_diem = (diem_toan * 3) + (diem_ly * 2) + (diem_hoa * 1);
    float diem_he_so = 3 + 2 + 1;
    float diem_trung_binh = tong_diem/diem_he_so;
    float diem_max = diem_toan;
    if (diem_ly > diem_max) diem_max = diem_ly;
    if (diem_hoa > diem_max) diem_max = diem_hoa;

    printf("diem cao nhat trong ba mon la: %.2f\n", diem_max);

    getchar();
    getchar(); 
    return 0;
}  