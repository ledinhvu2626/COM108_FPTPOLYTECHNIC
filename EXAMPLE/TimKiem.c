#include <stdio.h>

int main (){
    int gtct;
    int a[]={1,2,3,4,5,6,7,8}; // mang dem tu 0 cho nen 1 se la 0, 2 se la 1...etc
    printf("nhap gia tri can tim");
    scanf("%d", &gtct);
    //sd for de tim xem gia tri co trong mang khong
    for (int i = 0; i<sizeof(a)/sizeof(int);i++){
        if(a[i]== gtct){
            printf("gia tri nam o vi tri %d\n", i);
            break;
        }
    }
    return 0;
}