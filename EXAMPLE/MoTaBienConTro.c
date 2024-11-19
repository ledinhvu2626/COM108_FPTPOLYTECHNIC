#include <stdio.h>
int main(){
    int x; //trong bo nho se danh 1 o nho co ten la x va co dia chi la &x
    printf("Dia chi cua bien x la %d", &x);
    int *y; // day la bien con tro trong bo nho cung co mot o nho ten la y va dia chi &y 
    //nhung noi dung cua bien y la dia chi cua kieu nguyen (int) nao do
        y = &x;//y tro toi x: noi dung cua y la dia chi cua x
            printf("\nNoi dung cua bien y la %d", y);
    return 0;
}