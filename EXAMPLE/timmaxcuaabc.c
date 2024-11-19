#include <stdio.h>

int main() {
    float a, b, c;
    printf("Vui long nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Vui long nhap so thu hai: ");
    scanf("%f", &b);
    printf("Vui long nhap so thu ba: ");
    scanf("%f", &c);


    float max = a;
//cach 1 dung if
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }

    printf("%.f la so lon nhat\n", max);

//cach 2
    max = 0;
    if (a > b){
        if(a > c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if (b > a){
            max = b;
        }
        else{
            max = c;
        }
    }
    printf("%.f la so lon nhat, cach 2\n", max);
    return 0;
}
