#include <stdio.h>
#include <math.h>

void nhap(int *x)
{
    printf("nhap so = ");
    scanf("%d", x);
}

int tinhTong(int x, int y)
{
    int tong = x + y;
    return tong;
}

int tinhHieu(int x, int y)
{
    int hieu = x - y;
    return hieu;
}

int main()
{
    int a = 0, b, c, d;
    printf("a truoc khi nhap la: %d\n", a);
    nhap(&a);
    printf("a sau khi nhap la:  %d\n", a);
    nhap(&b);
    nhap(&c);
    nhap(&d);
    printf("a,b nhap vao: %d,%d\n", a, b);
    int tong1 = tinhTong(a, b);
    printf("a,b ra khoi ham: %d,%d\n", a,b);
    int tong2 = tinhTong(c, d);
    int hieu1 = tinhHieu(a, b);
    int hieu2 = tinhHieu(c, d);
    printf("\n%d + %d = %d\n", a, b, tong1);
    printf("\n%d + %d = %d\n", c, d, tong2);
    printf("\n%d + %d = %d\n", a, b, hieu1);
    printf("\n%d + %d = %d\n", c, d, hieu2);

    int TongChung = tong1 + tong2;

    printf("\nTong chung %d = %d + %d\n", TongChung, tong1, tong2);

    return 0;
}