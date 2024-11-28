#include <stdio.h>
#include <string.h>
int main(){
    char *token;
    char str[50]= {"Ho Va Ten"};
    char *delim = "";
    token = strtok(str,delim);
    while (token !=NULL)
    {
        printf(("%s\n"), token);
        token = strtok(NULL, delim);
    }

    return 0;
}