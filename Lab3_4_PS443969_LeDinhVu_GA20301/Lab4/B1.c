#include<stdio.h>
#include<conio.h>

int main() {

  int min, max;
  

  printf("nhap min: ");
  scanf("%d", &min);
  
  printf("nhap max: ");
  scanf("%d", &max);
  

  float tong = 0;
  float biendem = 0;
  float TB = 0;
  

  int i = min;         
  while(i <= max) {    
    if(i % 2 == 0) {
      tong += i;
      biendem ++;
    }
    i++;       
  }
  TB = tong / biendem;
  
  printf("- Duyet vong lap cac gia tri tu %d den %d \n", min, max);
  printf("- Ket qua: %f", TB);
  
  getch(); 
  return 0;
}