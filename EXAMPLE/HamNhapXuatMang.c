#include <stdio.h>
typedef int Mang[100];
void NhapMang(int n, Mang b){
    // nhap mang
    for(int i = 0;i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &b[i]);
        
    }
}
void XuatMang(int n, Mang b[]){
    // xuat mang
    for(int i = 0;i < n; i++){
        printf("a[%d]=%d\n",i,b[i]);
        
    }
}
int main(){
    Mang a[100];
    printf("nhap phan tu thuc te: ");
    int n;scanf("%d", &n);
    //nhap mang
    NhapMang(n,a);
    // xuat mang
    XuatMang(n,a);
    return 0;
}
