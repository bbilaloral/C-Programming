// Canlý Ders Uygulamasý - No: 053
// Rastgele diziye deðer atama
// 1-9 arasý rastgele rakamlardan oluþan 10 elemanlý bir dizi tanýmlar ve
// ekrana yazdýrýr.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int ali [10], i;
     srand(time(NULL));

     for (i=0; i<10; i++){
         ali[i] = 1 + rand() % 9;
     }
     
     for (i=0; i<10; i++){
         printf ("%d ", ali[i]);
     }

     getch ();
}
