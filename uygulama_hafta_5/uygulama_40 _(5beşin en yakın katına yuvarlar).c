// Canlý Ders Uygulamasý - No: 040
// Kullanýcýnýn girdiði bir tam sayýyý 5'in en yakýn katýna yuvarlar.

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
