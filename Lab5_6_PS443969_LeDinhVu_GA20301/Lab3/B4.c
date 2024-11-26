#include <stdio.h>
int main(){
    printf("\n Menu chuong trinh \n");
    printf("1. chuong trinh tinh hoc luc \n");
    printf("2. chuong trinh tinh phuong trinh bac 1\n");
    printf("3. chuong trinh tinh phuong trinh bac 2\n");
    printf("4. chuong trinh tinh tien dien\n");
    int choose;
    scanf("%d", &choose);

    switch(choose){
        case 1:
            printf("tinh hoc luc sinh vien\n");
            system("B1L3.exe");
            break;
        case 2:
            printf("giai phuong trinh bac 1\n");
            system("B2_1L3");
            break;
        case 3:
            printf("giai phuong trinh bac 2\n");
            system("B2_2L3");
            break;
        case 4:
            printf("chuong trinh tinh tien dien\n");
            system("B3_L3");
            break;
        default:
            printf("het cuu");            
    }
    return 0;
}