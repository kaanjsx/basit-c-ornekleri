#include<stdio.h>
 
 int main()
 {
 	int sayi;
    printf("Sayı: ");
    scanf("%d",&sayi);

    if( sayi%2 == 0 )
        printf("%d çift sayıdır.",sayi);
    else
        printf("%d tek sayıdır.",sayi);
    return 0;
    
 }