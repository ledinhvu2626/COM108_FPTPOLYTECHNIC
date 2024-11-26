#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf("nhap so a: ");
    scanf("%f", &a);
    printf("nhap so b: ");
    scanf("%f", &b);
    printf("nhap so c: ");
    scanf("%f", &c);
    printf("\n %0.0fx^2 +%0.0fx +%0.0f = 0",a,b,c);
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                printf("\nphuong trinh vo so nghiem \n");
            } else {
                printf("\nphuong trinh vo nghiem \n");
            }
        } else {
            printf("phuong trinh co nghiem x = %0.2f\n",-c/b);
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("\n nghiem thu nhat x1 = %0.2f\n",x1);
            printf("\n nghiem thu hai x2 = %0.2f\n",x2);
        } else if ( delta == 0) {
            printf("\nphuong trinh co nghiem kep: x1 = x2 = %0.2f\n",-b/2*a);
        } else {
            printf("\nphuong trinh vo nghiem\n");
        }
    }
 
    return 0;
}
