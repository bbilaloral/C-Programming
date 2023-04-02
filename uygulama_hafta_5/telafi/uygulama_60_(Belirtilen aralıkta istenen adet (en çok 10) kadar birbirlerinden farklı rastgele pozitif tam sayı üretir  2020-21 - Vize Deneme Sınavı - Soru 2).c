// Canl� Ders Uygulamas� - No: 060
// 2020-21 - Vize Deneme S�nav� - Soru 2

// Belirtilen aral�kta istenen adet (en �ok 10) kadar birbirlerinden
// farkl� rastgele pozitif tam say� �retir.
// Not: Girilen say� aral���n�n �st limitin 10000, geni�li�inin ise
// en az 10 oldu�u varsay�lmaktad�r.

/*

Sayi araligini giriniz: 5 15
Adet giriniz: 10

Rastgele uretilen sayilar: 6 12 10 15 7 8 9 14 13 5

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int dizi [10] = {0};
     int adet, baslangic, bitis, rastgele, var, i, j;
     srand(time(NULL));
     
     printf ("Sayi araligini giriniz: ");
     scanf ("%d %d", &baslangic, &bitis);
     
     printf ("Adet giriniz: ");
     scanf ("%d", &adet);
     
     for (i=0; i<adet; i++){
         
         rastgele = baslangic + rand () % (bitis - baslangic + 1);
         var = 0;
          
         for (j=0; j<=i; j++){
             if (dizi[j] == rastgele)
                var = 1;
         }
         
         if (var == 0){
            
            dizi[j] = rastgele;
            printf ("%d ", dizi[j]);
         }
         
         else {
              i--;
         }

     }
     
         
     getch ();
}
