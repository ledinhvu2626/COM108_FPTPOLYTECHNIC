#include <stdio.h>
int main (){
    int a[100]; //khai bao nhieu hon nhu cau
    printf("nhan phan tu thuc te: ");
    int n;
    scanf("%d", &n);
    //Nhap mang
    for(int i= 0;i < n-1;i++){
        printf("nhap a[%d]=", i);
        scanf("%d",&a[i]);
    }
    //xuat mang vua nhap
    printf("Mang a vua nhap");
    for(int i = 0;i < n -1; i ++){
        printf("\na[%d] = %d\n",i,a[i]);
    }
    return 0;
}