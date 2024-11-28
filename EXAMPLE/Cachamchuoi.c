#include <stdio.h>
#include <string.h>

int main() {
    char str[20]="Pelso";
    char str2[20]="Hello";
    printf("Hello = %d\n",strlen("hello"));
    printf("%d\n",strcmp(str,str2));
    if (strcmp("Hello","Helno")==0){
        printf("%s = %s\n",str,str2);
    }
    else if(strcmp(str,str2)<0){
        printf("%s < %s\n",str,str2);
    }
    else{
        printf("%s > %s\n",str,str2);
    }
    //puts(strcpy(str,str2));
    //puts(strcat(str,str2));
    //puts(strrev(str));
    puts(strncpy(str,str2+0,1));

    return 0;
}