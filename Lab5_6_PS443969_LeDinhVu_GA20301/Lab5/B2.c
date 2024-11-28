#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month, year;
    printf("vui long nhap nam vao: ");
    scanf("%d", &year);
    printf("vui long nhap thang vao: ");
    scanf("%d", &month);
    switch (month)
    {
    case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            printf("thang co 29 ngay");
        else
            printf("thang co 28 ngay");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("thang co 30 ngay");
        break;
    default:
        printf("thang co 31 ngay");
    }

    return 0;
}