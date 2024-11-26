#include <stdio.h>
int main(){
    int so_dien;
    printf("hay nhap so dien: ");
    scanf("%d", &so_dien);   
    float tdcd;

    if (so_dien <= 50) {
        tdcd = so_dien * 1.678;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    else if (so_dien <= 100) {   
        tdcd = so_dien * 1.734;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    else if (so_dien <= 200) {   
        tdcd = so_dien * 2.014;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    else if (so_dien <= 300) { 
        tdcd = so_dien * 2.536;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    else if (so_dien <= 400) {  
        tdcd = so_dien * 2.834;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    else {                   
        tdcd = so_dien * 2.927;
        printf("so tien dien can dong la: %.2f", tdcd);
    }
    
    return 0;
}
