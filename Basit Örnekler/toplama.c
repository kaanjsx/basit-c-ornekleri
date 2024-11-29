#include <stdio.h>

int main(void) {
int sayi1, sayi2, toplam;

printf("İlk sayıyı giriniz.");
scanf("%d", &sayi1);

printf("İkinci sayiyi giriniz.");
scanf("%d", &sayi2);

toplam = sayi1 + sayi2;
printf("%d + %d = %d", sayi1,sayi2,toplam);

return 0;
}