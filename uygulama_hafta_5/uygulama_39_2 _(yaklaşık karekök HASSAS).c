// Canl� Ders Uygulamas� - No: 039_2
// Bir tam say�n�n yakla��k karek�k�n� hesaplar.
// sqrt () fonksiyonu kullanmadan.
// DAHA HASSAS VERS�YON

#include <stdio.h>

main (){

//Ondal�kl� say�lar� virg�lden sonra daha hassas hesaplamak i�in kul. (%lf)(long float gibi)

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
