// Canlý Ders Uygulamasý - No: 053_3
// Programcýnýn diziye deðer atamasý - Manuel Atama
// Programcýnýn atadýðý 5 deðeri diziye atar ve ekrana yazdýrýr.

#include <stdio.h>

main (){

     int ali [5] = {1, 2, 3, 4, 5}, i;
     
// Diziye manuel olarak bir deðer atarsak, ali [5] = {1}, diðer deðerler 0 olur
// 1 0 0 0 0 

     for (i=0; i<5; i++){
         printf ("%d ", ali[i]);
     }

     getch ();
}
