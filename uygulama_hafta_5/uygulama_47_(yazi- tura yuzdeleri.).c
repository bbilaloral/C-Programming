// Canl� Ders Uygulamas� - No: 047
// Bir madeni paray� kullan�c�n�n istedi�i kadar atar ve yaz� / tura
// y�zdeleri g�sterir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int sayi, adet, yazi = 0, tura = 0, i;
     srand(time(NULL));
     
     printf ("Kac defa madeni parayi atmak istiyorsunuz : ");
     scanf ("%d", &adet);
     
     for (i=1; i<=adet; i++){
     
         sayi = rand() % 2;
         
         if (sayi == 0){
            tura++;
         }
         else {
              yazi++;
         }
     
     }
     
     printf ("Tura yuzdesi = %.2f\n", 100*(float)tura/adet);
     printf ("Yazi yuzdesi = %.2f", 100*(float)yazi/adet);
     
     getch ();

}
