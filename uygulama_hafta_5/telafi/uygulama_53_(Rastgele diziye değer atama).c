// Canl� Ders Uygulamas� - No: 053
// Rastgele diziye de�er atama
// 1-9 aras� rastgele rakamlardan olu�an 10 elemanl� bir dizi tan�mlar ve
// ekrana yazd�r�r.

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
