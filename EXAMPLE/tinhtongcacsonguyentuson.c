#include <stdio.h>
int main(){
    int n;
    printf("hay nhap so nguyen n: ");
    scanf("%d", &n);
    //for
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    printf("tong cac so tu 1 den %d la: %d\n", n, sum);
    //while
    sum = 0;
    int = 1;
    n = 0;
    while (i<n){
        sum = sum + 1;
        i++;
    }
    printf("tong cac so tu 1 den %d la: %d\n", n, sum);
    return 0;

}