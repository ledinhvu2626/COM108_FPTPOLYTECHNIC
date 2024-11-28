#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="TranHungDaoVuong";
    char str2='H';
    char str3='n';
    char str4[]="HungDao";
    puts(str1);
    puts(strchr(str1,str2));
    puts(strrchr(str1,str3));
    puts(strstr(str1,str4));
}