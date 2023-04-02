// Canlý Ders Uygulamasý - No: 039_3
// Bir tam sayýnýn yaklaþýk karekökünü hesaplar.
// sqrt () fonksiyonu kullanmadan.
// DAHA HASSAS VERSÝYON + DAHA HIZLI VERSÝYON

#include <stdio.h>

main (){

     double sayi, i, j, kackez = 0;
     
     printf ("Karekokunu hesaplatmak istediginiz sayiyi giriniz: ");
     scanf ("%lf", &sayi);
     
     for (i=0; i*i<=sayi; i++){
         kackez++;
     }
     
     for (j=i-1; j*j<=sayi; j=j+0.001){
         kackez++;    
     }
     
     printf ("Karekok = %.3lf\n", j-0.001);
     printf("Tur sayisi = %.lf", kackez);
     
     getch ();
     
}
