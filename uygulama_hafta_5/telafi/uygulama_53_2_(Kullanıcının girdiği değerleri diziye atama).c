// Canl� Ders Uygulamas� - No: 053_2
// Kullan�c�n�n girdi�i de�erleri diziye atama
// Kullan�c�n�n girdi�i 5 de�eri diziye atar ve ekrana yazd�r�r.

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
