// Canlý Ders Uygulamasý - No: 042
// Rastgele 10 tane tam sayý (pozitif veya negatif) üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int sayi, i;
     srand(time(NULL));
     
     for (i=1; i<=10; i++){
         
         sayi = rand ();
         
         if (rand () < 16000){
            sayi = sayi*(-1);
         }
         
         printf ("%d ", sayi);
         
            
     }
     
     
     getch ();
     
}
