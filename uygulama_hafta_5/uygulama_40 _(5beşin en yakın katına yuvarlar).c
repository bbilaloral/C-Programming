// Canl� Ders Uygulamas� - No: 040
// Kullan�c�n�n girdi�i bir tam say�y� 5'in en yak�n kat�na yuvarlar.

#include <stdio.h>

main (){

     int sayi;
     
     printf ("Sayinizi giriniz: ");
     scanf ("%d", &sayi);
     
     if (sayi % 10 < 3){
        sayi = sayi - (sayi %10);
     }
     
     else if (sayi % 10 < 8){
        sayi = sayi - (sayi %10) + 5;
     }
     
     else if (sayi % 10 <= 9){
        sayi = sayi - (sayi %10) + 10;
     }
     
     printf ("Yuvarlanmis = %d", sayi);
     getch ();
     
}
