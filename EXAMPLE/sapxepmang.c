#include <stdio.h>

int main(){
    typedef Mang[9];
    Mang a;
    //nhap du lieu cho mang
    int n;// so phan tu thuc te
    printf("nhap so phan tu thuc te: ");
    scanf("%d", &n);
    for(int i =0; i<n;i++){
        printf("nhap a[%d]= ", i);
        scanf("%d", &a[i]);

    }
    printf("Mang vua nhap\n");
    for(int i=0; i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    //sap xep mang
    for(int i=0; i<n;i++)
        for(int j=0; j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int tam = a[j];
                a[j]= a[j+1];
                a[j+1]= tam;
            }
         
        }
    printf("mang sau khi sap xep\n");
    for(int i=0; i<n;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }
    return 0;
}