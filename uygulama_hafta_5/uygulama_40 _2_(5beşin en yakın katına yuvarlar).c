// Canl� Ders Uygulamas� - No: 040_2
// Kullan�c�n�n girdi�i bir tam say�y� 5'in en yak�n kat�na yuvarlar.
// A�A�IYA DO�RU �LERLE ve YUKARIYA DO�RU �LERLE
// �K� FARKLI Y�NDE HAREKET

#include <stdio.h>

main (){

     int sayi, alt, ust, i;
     
     printf ("Sayinizi giriniz: ");
     scanf ("%d", &sayi);
     
     for (i=sayi; i%5 != 0; i++);
         ust = i;
     
     for (i=sayi; i%5 != 0; i--);
         alt = i;
         
     if (ust-sayi > sayi-alt){
        
        printf ("Yuvarlanmis Hali = %d", alt);
     }
     
     else {
        
        printf ("Yuvarlanmis Hali = %d", ust);
     }
     
     getch ();
     
}
