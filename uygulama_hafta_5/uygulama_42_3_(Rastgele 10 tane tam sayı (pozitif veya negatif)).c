// Canl� Ders Uygulamas� - No: 042
// Rastgele 10 tane tam say� (pozitif veya negatif) �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int i;
     srand(time(NULL));
     
     for (i=1; i<=10; i++){
         
         printf ("%d ", rand() - rand());
     }
     
     
     getch ();
     
}
