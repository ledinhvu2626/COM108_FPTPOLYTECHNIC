#include<stdio.h>
#include<conio.h>

int main() {
  int x;
  
  printf("nhap x: ");
  scanf("%d", &x);

  printf("- So x = %d \n", x);
  
  if(x < 2) {
    printf("- Ket qua: %d KHONG phai la so NGUYEN TO", x);
  }
  else {
    // Chay vong lap tu 2 -> x
    int count = 0;
    for(int i = 2; i < x; i++) {
      if(x % i == 0) {
        count++;
      }
    }
    
    // Ket qua
    if(count == 0) {
      printf("- Ket qua: %d LA so NGUYEN TO", x);
    } else {
      printf("- Ket qua: %d KHONG phai la so NGUYEN TO", x);
    }
  
    int i;
    for(i = 1; i < x; i++) {
      if((i*i) == x) {
      printf(" va la so CHINH PHUONG");
      }else{
        printf(" va khong phai la so CHINH PHUONG");
        break;
      }
    }    
  }
  
  getch();
  return 0;
}