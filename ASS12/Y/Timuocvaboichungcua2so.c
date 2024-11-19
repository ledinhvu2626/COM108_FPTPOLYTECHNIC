#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {            // Lặp lại cho đến khi b = 0
        int temp = b;           // Lưu giá trị của b vào biến tạm
        b = a % b;              // Tính số dư của a chia b, gán cho b
        a = temp;               // Gán giá trị b ban đầu (temp) cho a
    }
    return a;                   // Khi b = 0, giá trị của a là UCLN
}


int main() {
    int a, b;
    
    printf("Vui long nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Vui long nhap so thu hai: ");
    scanf("%d", &b);
    
    int ucln = gcd(a, b);
    int bcnn = (a / ucln) * b;
    
    printf("(UCLN) cua %d va %d la: %d\n", a, b, ucln);
    printf("(BCNN) cua %d va %d la: %d\n", a, b, bcnn);
    
    return 0;
}
