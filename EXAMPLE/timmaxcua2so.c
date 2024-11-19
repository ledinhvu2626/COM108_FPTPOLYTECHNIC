#include <stdio.h>
int main()
{
    int a, b;
    printf("nhap a =");
    scanf("%d", &a);
    printf("nhap b =");
    scanf("%d", &b);
    int max = a > b ? a : b;
    printf("%d cua %d va %d la %d", a, b, max);
    return 0;
    getchar();
    getchar();
}