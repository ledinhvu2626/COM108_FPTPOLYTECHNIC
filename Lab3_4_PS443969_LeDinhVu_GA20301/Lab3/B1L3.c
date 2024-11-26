#include <stdio.h>
int main(){
    float dhl;
    printf("nhap diem hoc luc cua ban: ");
    scanf("%f", &dhl);

    if(dhl >= 9){
        printf("hlxs");
    }
    if(dhl <9 && dhl >= 8){
        printf("hlg");
    }
    if(dhl < 8 && dhl > 6.5){
        printf("hlk");
    }
    if(dhl < 6.5 && dhl > 5){
        printf("hltb");
    }
    if(dhl < 5 && dhl >=3.5){
        printf("hly");
    }
    if(dhl < 3.5){
        printf("hlkem");
    }
    
    return 0;
}