// Canlý Ders Uygulamasý - No: 059
// 2018-19 - Kýsa Sýnav 4 - B Grubu - Soru 2

// Girilen bir sayýnýn yine girilen 8 tane sayýdan oluþan
// bir dizideki sayýlardan hangisine daha yakýn olduðunu bulur.

/*

Sayinizi giriniz: 16
Sayi dizinizi giriniz: 168 44 0 19 4 21 87 47
En yakin sayi: 19

*/

// abs () fonksiyonu parantez içindeki ifadenin mutlak deðeri alýr.
// Örneðin x = -5; x = abs (x); ifadesinde x deðiþkeni 5'e eþit olur.
// abs () fonksiyonu stdlib kütüphanesinde yer almaktadýr.


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
