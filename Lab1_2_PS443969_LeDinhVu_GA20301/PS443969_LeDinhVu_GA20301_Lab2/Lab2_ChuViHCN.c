#include <stdio.h>
int main()
{
    float chieu_dai, chieu_rong;
    printf("nhap chieu dai =");
    scanf("%f", &chieu_dai);
    printf("nhap chieu rong =");
    scanf("%f", &chieu_rong);
    float CVHCN = (chieu_dai + chieu_rong) * 2; 
    printf("chu vi hinh chu nhat la %.2f", CVHCN);
    getchar();
    getchar();
    return 0;
}