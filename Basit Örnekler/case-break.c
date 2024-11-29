#include <stdio.h>

int main(void){
     char takim;
     printf("Lütfen bir karakter (k,m,y) giriniz: ");

     scanf("%c", &takim);
     switch (takim){
       case 'k':
          printf("kaan\n");
          break;
       case 'm':
          printf("melih\n");
          break;
       case 'y':
          printf("yavuz\n");
          break;
       default:
          printf("k,m,y karakterlerinden birisini girmelisiniz.\n");
          break;
     }
  return 0;
}
