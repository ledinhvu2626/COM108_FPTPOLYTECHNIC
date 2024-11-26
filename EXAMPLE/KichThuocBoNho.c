#include <stdio.h>
void NhapMang(int n, int b[n]){
    // nhap mang
    for(int i = 0;i < n; i++){
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
        
    }
}
void XuatMang(int n, int a[n]){
    // xuat mang
    for(int i = 0;i < n; i++){
        printf("a[%d]=%d\n",i,a[i]);
        
    }
}
int main(){
    int a[100];
    printf("nhap phan tu thuc te: ");
    int n;scanf("%d", &n);
    //nhap mang
    NhapMang(n,a);
    // xuat mang
    XuatMang(n,a);
    return 0;
}