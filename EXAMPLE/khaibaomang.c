#include <stdio.h>
//typedef int Mang[100];

int main(){
    int a[5]; //khai bao mang kieu so nguyen gom 5 phan tu
    int b[4]={1,3,5,7};//khai bao bien vua khoi tao
    int c[6] = {2,4};//khoi tao 2 phan tu dau tien, cac phan tu = 0
    int d[] = {1,2,2,3,4,5,6};//xac dinh so phan tu o ben phai
    typedef int Mang[100];
    Mang e; // chu y rat hay dung
    //truy xuat phan tu ten mang[thu tu] 
    printf("phan tu thu 2 cua mang b la: b[2] = %d\n",b[2]);
    printf("So phan tu cua mang d la: %d\n",sizeof(d)/sizeof(int));
    
    return 0;
}