/*nhap vao 1 so cho biet so do co phai la so duong hay khong*/
#include <stdio.h>
int main()
{
    int a;

    printf("nhap mot so bat ki");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("so vua nhap la so duong\n");
    }
    else
    {
        printf("het cuu\n");
    }
    if (a % 2 == 0)
    {
        printf("so vua nhap la so chan\n");
    }
    else
    {
        printf("kys\n ");
    }

    getchar();
    return 0;
}