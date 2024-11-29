#include <stdio.h>

int main(void) {
  int sayi1, sayi2;
  printf("Birinci sayiyi girin:");
  scanf("%d", &sayi1);
  
  printf("Ikinci sayiyi girin:");
  scanf("%d", &sayi2);

  if (sayi1 > sayi2)
    printf("Buyuk sayi %d", sayi1);
  else
    printf("Buyuk sayi %d", sayi2);
  return 0;
}