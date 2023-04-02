// Canlý Ders Uygulamasý - No: 039
// Bir tam sayýnýn yaklaþýk karekökünü hesaplar.
// sqrt () fonksiyonu kullanmadan.

#include <stdio.h>

main (){

     int sayi, i;

     printf ("Karekokunu hesaplamak istediginiz sayiyi giriniz : ");
     scanf ("%d", &sayi);
     
     for (i=0; i*i<=sayi; i++);
     
     printf ("Karekok = %d", i-1);
     

     getch ();
     
}
