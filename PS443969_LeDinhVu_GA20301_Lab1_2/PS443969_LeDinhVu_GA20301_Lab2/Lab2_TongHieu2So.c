#include <stdio.h>
int main()
{
    int a, b;
    printf("nhap a =");
    scanf("%d", &a);
    printf("nhap b =");
    scanf("%d", &b);
    int tong = a + b;
    int hieu = a - b;
    printf("%d + %d = %d\n", a, b, tong);
    printf("%d - %d = %d\n", a, b, hieu);
    getchar();
    getchar(); 
    return 0;
}