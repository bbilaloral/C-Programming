// Canlý Ders Uygulamasý - No: 052_2
// Girilen basamak sayýsýna sahip ve yine girilen adet kadar 
// rastgele tam sayýyý ekrana yazdýrýr.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int basamak, adet, i, j,  rastgele, sayi;
     srand(time(NULL));
     
     printf ("Basamak ve adet degerlerini giriniz : ");
     scanf ("%d %d", &basamak, &adet);
     
     for (j=1; j<=adet; j++){
         
         sayi = 0;
         
         for (i=1; i<=basamak; i++){
             
             if (i==1){
                rastgele = 1 + rand() % 9;
             }
             else {
                  rastgele = rand() % 10;
             }
             
             sayi = sayi*10 + rastgele;
         }
         
         printf ("%d ", sayi);
         
     }

     getch ();     
}
