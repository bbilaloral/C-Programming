// Canlý Ders Uygulamasý - No: 041
// Rastgele 10 tane tam sayý üretir.

// (1) #include <stdlib.h> #include <time.h> kutuphaneleri eklenir.
// (2) int den sonra srand(time(NULL)); fonksiyonu yazilir
// (3) Rastgele olmasini istedigimiz sayýyý rand (); fonksiyonuna eþleriz --> ali = rand ();

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int ali, i;
     srand(time(NULL));
     
     for (i=0; i<=10; i++){
         ali = rand ();
         printf ("%d ", ali);
     }
     
     getch ();
     
}
