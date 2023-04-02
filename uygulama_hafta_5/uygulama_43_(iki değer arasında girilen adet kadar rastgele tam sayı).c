// Canlý Ders Uygulamasý - No: 043
// Girilen iki deðer arasýnda girilen adet kadar rastgele tam sayý üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int adet, alt, ust, i, sayi;
     srand(time(NULL));
     
     printf ("Once baslangic sonra bitis degerlerini giriniz : ");
     scanf ("%d %d", &alt, &ust);
     
     printf ("Sayi adedini giriniz : ");
     scanf ("%d", &adet);
     
     for (i=1; i<=adet; i++){
         
         sayi = (alt + rand () % (ust - alt + 1));
         
         printf ("%d ", sayi);
     }
     
     getch ();
}
