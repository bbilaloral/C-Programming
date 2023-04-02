// Canlý Ders Uygulamasý - No: 039_2
// Bir tam sayýnýn yaklaþýk karekökünü hesaplar.
// sqrt () fonksiyonu kullanmadan.
// DAHA HASSAS VERSÝYON

#include <stdio.h>

main (){

//Ondalýklý sayýlarý virgülden sonra daha hassas hesaplamak için kul. (%lf)(long float gibi)

     double sayi, i, kackez = 0;
     
     printf ("Karekokunu hesaplatmak istediginiz sayiyi giriniz: ");
     scanf ("%lf", &sayi);
     
     for (i=0; i*i<=sayi; i=i+0.001){
         kackez ++;
         
     }
     printf ("Kackez = %.lf\n", kackez);
     printf ("Karekok = %.3lf", i-0.001);
     
     getch ();
     
}
