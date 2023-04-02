// Canlý Ders Uygulamasý - No: 050
// Fibonacci dizisinin girilen adet kadar terimini ekrana yazar.
// 0 1 1 2 3 5 8 13 21 ...

#include <stdio.h>

main (){
     
     int terim, a = 0, b = 1, depo, i;
     
     printf ("Terim sayisini giriniz : ");
     scanf ("%d", &terim);
     
     for (i=1; i<=terim; i++){
         
         depo = a;
         a = b;
         b = depo + b;
         
         printf ("%d ", depo);
     }
     
     getch ();
}
