// Canlý Ders Uygulamasý - No: 052
// Girilen basamak sayýsýna sahip ve yine girilen adet kadar 
// rastgele tam sayýyý ekrana yazdýrýr.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int basamak, adet, i, j,  rastgele;
     srand(time(NULL));
     
     printf ("Basamak ve adet degerlerini giriniz : ");
     scanf ("%d %d", &basamak, &adet);
     
     for (j=1; j<=adet; j++){
         
         for (i=1; i<=basamak; i++){
             
             if (i==1){
                rastgele = 1 + rand() % 9;
             }
             else {
                  rastgele = rand() % 10;
             }
             
             printf ("%d", rastgele);
         }
         
         printf (" ");
         
     }

     getch ();     
}
