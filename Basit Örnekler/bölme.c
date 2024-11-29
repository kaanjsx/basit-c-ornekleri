#include <stdio.h>

int main() {
int sayi1,sayi2,sonuc,kalan;

printf("İlk sayiyi giriniz: ");
scanf("%d", &sayi1);

printf("bölünecek sayiyi giriniz: ");
scanf("%d", &sayi2);

kalan = sayi1 % sayi2;
sonuc = sayi1 / sayi2;

printf("%d'nin %d'ye bölümü %d'dir. Kalan: %d", sayi1,sayi2,sonuc, kalan);
  return 0;
}