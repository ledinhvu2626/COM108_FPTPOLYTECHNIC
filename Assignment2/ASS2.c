#include <stdio.h>
#include <stdlib.h>


int main() {
    while (1) { 
        printf("\n+ ------------------------------------------------ +\n");
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
            return 0;
        }

        int choose;
        printf("Hay chon 1 menu: ");
        scanf("%d", &choose);
        while (getchar() != '\n'); 

        switch (choose) {
            case 1:
                printf("Chuc nang kiem tra so nguyen\n");
                system("KiemTraSoNguyenY21.exe");
                getchar();
                break;
            case 2:
                printf("Chuc nang tim uoc so chung va boi so chung cua 2 so\n");
                system("Timuocvaboichungcua2so.exe");
                getchar();
                break;
            case 3:
                printf("Chuc nang tinh tien karaoke\n");
                system("Karaoke.exe");
                getchar();
                break;
            case 4:
                printf("Chuc nang tinh tien dien\n");
                system("tiendien.exe");
                getchar();
                break;
            case 5:
                printf("Chuc nang doi tien\n");
                getchar();
                break;
            case 6:
                printf("Chuc nang tinh lai xuat ngan hang vay tra gop\n");
                getchar();
                break;
            case 7:
                printf("Chuc nang vay tien mua xe\n");
                getchar();                
                break;
            case 8:
                printf("Chuc nang sap xep thong tin sinh vien\n");
                getchar();
                break;
            case 9:
                printf("Chuc nang FPOLY LOTO\n");
                getchar();
                break;
            case 10:
                printf("Chuc nang tinh toan phan so\n");
                getchar();
                break;
            default:
                printf("Het cuu\n");
                getchar();
        }
    }

    printf("Chuong trinh ket thuc.\n");
    return 0;
}
