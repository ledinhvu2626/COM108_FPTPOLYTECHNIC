#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) { 
        printf("+ ------------------------------------------------ +\n");
        printf("| 1. kiem tra so nguyen                            |\n");
        printf("| 2. tim uoc so chung va boi so chung cua 2 so     |\n");
        printf("| 3. chuong trinh tinh tien karaoke                |\n");
        printf("| 4. tinh tien dien                                |\n");
        printf("| 5. chuc nang doi tien                            |\n");
        printf("| 6. chuc nang tinh lai xuat ngan hang vay tra gop |\n");
        printf("| 7. vay tien mua xe                               |\n");
        printf("| 8. sap xep thong tin sinh vien                   |\n");
        printf("| 9. FPOLY LOTO                                    |\n");   
        printf("| 10. tinh toan phan so                            |\n");
        printf("+ ------------------------------------------------ +\n");
        
  
        printf("Co muon ket thuc som khong (Y/N?) ");
        fflush(stdin); 
        char c = getchar();  
        while (getchar() != '\n');  
        
        if (c == 'Y' || c == 'y') { 
            break;
        }

        int choose;
        printf("Hay chon 1 menu: ");
        scanf("%d", &choose);
        while (getchar() != '\n'); 

        switch (choose) {
            case 1:
                printf("Chuc nang kiem tra so nguyen\n");

                break;
            case 2:
                printf("Chuc nang tim uoc so chung va boi so chung cua 2 so\n");
 
                break;
            case 3:
                printf("Chuc nang tinh tien karaoke\n");

                break;
            case 4:
                printf("Chuc nang tinh tien dien\n");

                break;
            case 5:
                printf("Chuc nang doi tien\n");

                break;
            case 6:
                printf("Chuc nang tinh lai xuat ngan hang vay tra gop\n");

                break;
            case 7:
                printf("Chuc nang vay tien mua xe\n");

                break;
            case 8:
                printf("Chuc nang sap xep thong tin sinh vien\n");

                break;
            case 9:
                printf("Chuc nang FPOLY LOTO\n");

                break;
            case 10:
                printf("Chuc nang tinh toan phan so\n");

                break;
            default:
                printf("Het cuu\n");
        }
    }

    printf("Chuong trinh ket thuc.\n");
    fflush(stdin);
    char c = getchar();
    return 0;
}
