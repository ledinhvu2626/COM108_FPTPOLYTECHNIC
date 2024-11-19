#include<stdio.h>
#include<conio.h>

int main() {
  char choose;

  do {
    printf("+---------------------------------------------+\n");
    printf("+ 1. Tinh xep hang hoc luc.                   +\n");
    printf("+ 2. Giai phuong trinh bac nhat.              +\n");
    printf("+ 3. Giai phuong trinh bac hai.               +\n");
    printf("+ 4. Tinh tien dien.                          +\n");
    printf("+---------------------------------------------+\n");
    printf("Xin moi ban chon chuc nang (1, 2, 3, 4):");
    scanf("%d", &choose);
  } while(choose < 1 || choose > 4);
  
  switch(choose) {
    case 1:
      printf("Tinh xep hang hoc luc.");
      break;
    case 2:
      printf("Giai phuong trinh bac nhat.");
      break;
    case 3:
      printf("Giai phuong trinh bac hai.");
      break;
    case 4:
      printf("Tinh tien dien.");
      break;
    default:
      printf("Vui long chi lua chon tu 1-4.");
      break;
  }
  
  getch();
  return 0;

}