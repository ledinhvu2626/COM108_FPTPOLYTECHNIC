//xuat ra man hinh cau lap trinh C khong kho cho den khi nhap ki tu n thi ket thuc
#include <stdio.h>
int main(){
    while(1){
        printf("Lap Trinh C Khong Kho\n");
        char c;
        printf("u wanna stop?(Y/N): \n");
        fflush(stdio);
        c = getchar();
        if (c =='n') 
            break;
    }
    return 0;
}