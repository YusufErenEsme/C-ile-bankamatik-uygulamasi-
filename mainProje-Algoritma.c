#include <stdio.h>
#include <stdlib.h>
int main() {
int tutar;
int bakiye=10000;
int islem;
int sifre, i=0;
printf("ESME BANK\nHosgeldiniz...\n");
printf("Sifrenizi Giriniz:");
scanf("%d",&sifre);
while(sifre!=1111){
 printf("Yanlis Sifre Girdiniz.Tekrar Deneyiniz");2
 scanf("%d",&sifre);
i++;
if(i==3){
 printf("Kartiniz Bloke Olmustur\n");   
 printf("Subelerimize Basvurunuz.");
return 0;}
}

printf("ESME BANKASI\nHosgeldiniz...\n");
printf("Islemler:\n1-Para Cekme: \n2-Para Yatirma: \n3-Havale Yapma:\n4-Cikis:\n");

printf("Islem Seciniz:");
scanf("%d",&islem);

switch(islem){
 case 1:
 	printf("Bakiyeniz:%d TL\n",bakiye);
	printf("Cekilecek tutar:");
    scanf("%d",&tutar);
    if(tutar>bakiye){
	  printf("Bakiye yetersiz\n");
	}
    bakiye-=tutar;
    printf("Guncel Bakiyeniz:%d TL",bakiye);
    break; 
 case 2:
 	printf("Bakiyeniz:%d TL\n",bakiye);
	printf("Yatiralacak tutar:");
    scanf("%d",&tutar);
    
     bakiye+=tutar;
    printf("Guncel Bakiyeniz:%d TL",bakiye);
   break;
  case 3:
  	printf("Bakiyeniz:%d TL\n",bakiye);
	printf("Havale yapilacak tutar:");
    scanf("%d",&tutar);
    
    bakiye-=tutar;
    printf("Guncel Bakiyeniz:%d TL",bakiye);
    break; 
  case 4:
  	printf("Iyi Gunler.Kartinizi unutmayiniz");
	break;
  default:
     printf("Hatali Giris Yaptiniz");
     break;	
}
 return 0;
}
 
 




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

