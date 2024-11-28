#include <stdio.h>
int main (){
    char str[50];
    //Nhap chuoi
    printf("Nhap ho ten: ");
    //scanf("%s",str);//Lay moi ho thoi
    gets(str);
    //printf("Ho Ten: %s",str);
    puts(str);
    return 0;
}