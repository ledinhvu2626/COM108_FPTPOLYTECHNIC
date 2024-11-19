#include <stdio.h>
int main(){
    float a,b,x;
    printf("vui long nhap a");
    scanf("%f", &a);
    printf("vui long nhap b");
    scanf("%f", &b);
    if ( a == 0 ){
        if(b == 0){
            printf("vo so nghiem\n");
        }
        else{
            printf("vo nghiem\n");
        }
    }
    else{
        x=-b/a;
    }

    printf("x cua ban la %f", x);
    return 0;
}