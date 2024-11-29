#include <stdio.h>

int main()
{
    int sayi1, sayi2, carpma;
    printf("İlk sayıyı giriniz: ");
    scanf("%d", &sayi1);
    
    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);
    
    carpma = sayi1*sayi2;
    
    printf("%d ile %d'nin çarpımı %d.", sayi1,sayi2,carpma);

    return 0;
}
