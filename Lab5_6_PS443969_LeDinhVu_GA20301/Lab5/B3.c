#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;       
    *b = temp;     
}
int main() {
    int a, b;

    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
