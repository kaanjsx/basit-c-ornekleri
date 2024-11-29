#include <stdio.h>

int main() {
int vize,final;

printf("Vize notunu giriniz: ");
scanf("%d", &vize);

printf("Fnal notunu giriniz: ");
scanf("%d", &final);

float ortalama = vize*0.4 + final*0.6;
if(ortalama > 50) {
    printf("Sınıfı geçtiniz ortalamanın üstündesiniz. Ortalamanız: %f", ortalama);
} else {
printf("%f ile kaldınız.", ortalama);
}
return 0; 
}