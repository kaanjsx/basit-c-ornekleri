#include <stdio.h>

int main(){
	int sayi,i,sonuc=1;
	
	printf("Faktöriyelini almak istediğiniz sayıyı giriniz: ");
	scanf("%d",&sayi);

	for(int i=2; i<=sayi ; i++)     
		sonuc = sonuc * i; 

	printf("%d sayısının faktöriyeli : %d", sayi,sonuc); 
}
