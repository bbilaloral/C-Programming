// Canl� Ders Uygulamas� - No: 039_3
// Bir tam say�n�n yakla��k karek�k�n� hesaplar.
// sqrt () fonksiyonu kullanmadan.
// DAHA HASSAS VERS�YON + DAHA HIZLI VERS�YON

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
