#include <stdio.h>
int main(){
    int a[15]={1,2,4,5,6,7,8,9,};
    int ins,vt;//ins la gia tri
    int n = 7; //gia tri thuc te
    for(int i = 0;i<7;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }
    printf("nhap phan tu muon chen: ");
    scanf("%d",&ins); 
    printf("nhap vi tri chen: "); 
    scanf("%d", &vt);
    //chen
    //dich cac phan tu sang phai 1 vi tri bat dau 
    //o vi tri chen
    for(int i = n-1;i>= vt;i--){
        a[i+1]=a[i];
    }
    //gan gia tri vao vi tri chen
    a[vt]=ins;
    //cap nhat so luong
       n++;
    printf("mang sau khi chen\n");
    for(int i = 0;i<7;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }
    //xoa phan tu
    printf("nhap vi tri muon xoa: ");
    int vtxoa;
    scanf("%d", &vtxoa);
    //dich cac vi tri xoa sang trai
    for(int i = vtxoa-1;i<n;i++){
        a[i] = a[i+1];
    }
    //cap nhat lai so phan tu
    n--;
    printf("mang sau khi xoa: \n");
    for(int i = 0;i<n;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }    
    //doi gia tri cua 2 phan tu
    printf("Nhap vi tri 2 phan tu muon doi: ");
    int vt1, vt2;
    scanf("%d%d",&vt1, &vt2);
    int tam = a[vt1];
    a[vt1]= a[vt2];
    a[vt2]= tam;
    printf("Mang sau khi doi gia tri: \n");
    for(int i = 0;i<n;i++){
        printf("a[%d]= %d\n",i,a[i]);
    } 
    return 0;
}