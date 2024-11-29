#include <stdio.h>
int main(void) {
int sayi1,sayi2,sonuc;

printf("İlk sayıyı giriniz: ");
scanf("%d", &sayi1);

printf("Çıkarılacak sayıyı giriniz:");
scanf("%d", &sayi2);

sonuc = sayi1 - sayi2;
printf("%d - %d = %d", sayi1, sayi2 , sonuc);

    return 0;
}