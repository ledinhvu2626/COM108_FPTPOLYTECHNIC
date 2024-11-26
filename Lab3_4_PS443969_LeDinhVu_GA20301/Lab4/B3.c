#include<stdio.h>
#include<conio.h>

int main() {
  int x;
  
  printf("Moi nhap x: ");
  scanf("%d", &x);
  
  printf("=== CHUONG TRINH KIEM TRA SO X CO PHAI LA SO CHINH PHUONG? ===\n");
  printf("Thong tin:\n");
  printf("- So x = %d \n", x);

  int i;
  for(i = 1; i < x; i++) {
    if((i*i) == x) {
     printf("la so chinh phuong");
     break;
    }
  }

  getch();
  return 0;
}