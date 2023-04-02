// Canl� Ders Uygulamas� - No: 059
// 2018-19 - K�sa S�nav 4 - B Grubu - Soru 2

// Girilen bir say�n�n yine girilen 8 tane say�dan olu�an
// bir dizideki say�lardan hangisine daha yak�n oldu�unu bulur.

/*

Sayinizi giriniz: 16
Sayi dizinizi giriniz: 168 44 0 19 4 21 87 47
En yakin sayi: 19

*/

// abs () fonksiyonu parantez i�indeki ifadenin mutlak de�eri al�r.
// �rne�in x = -5; x = abs (x); ifadesinde x de�i�keni 5'e e�it olur.
// abs () fonksiyonu stdlib k�t�phanesinde yer almaktad�r.


#include <stdio.h>
#include <stdlib.h>

main (){
     
     int sayi, dizi [8], i, yakinlik, terim_no;
     
     printf ("Sayinizi giriniz : ");
     scanf ("%d", &sayi);
     
     printf ("Sayi dizinizi giriniz : ");
     
     for (i=0; i<8; i++){
         scanf ("%d", &dizi[i]);
     }
     
     yakinlik = abs(sayi - dizi[0]);
     terim_no = 0;
     
     for (i=1; i<8; i++){
         
         if ((abs(sayi - dizi[i])) < yakinlik){
            yakinlik = abs(sayi - dizi[i]);
            terim_no = i;
         }
     }
     
     printf ("En yakin sayi : %d", dizi[terim_no]);
     
     
     
     getch ();
}
