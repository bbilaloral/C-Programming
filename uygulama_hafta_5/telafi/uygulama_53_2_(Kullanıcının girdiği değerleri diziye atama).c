// Canlý Ders Uygulamasý - No: 053_2
// Kullanýcýnýn girdiði deðerleri diziye atama
// Kullanýcýnýn girdiði 5 deðeri diziye atar ve ekrana yazdýrýr.

#include <stdio.h>

main (){

     int ali [10], i;

     for (i=0; i<5; i++){
         scanf ("%d", &ali[i]);
     }
     
     for (i=0; i<5; i++){
         printf ("%d ", ali[i]);
     }

     getch ();
}
