// Canl� Ders Uygulamas� - No: 049
// 0 girilene kadar girilen pozitif tam say�lar aras�ndaki en b�y�k 
// birinci ve ikinci de�eri bulur.

#include <stdio.h>

main (){
     
     int sayi, birinci, ikinci, adet = 0;
     
     while (1){
     
           scanf ("%d", &sayi);
           adet ++;
           
           if (sayi == 0){
           break;
           }
           
           if (sayi > birinci || adet == 1){
              ikinci = birinci;
              birinci = sayi;
           }
           
           else if (sayi > ikinci || adet == 1){
              ikinci = sayi;
           }
     }
     
     if(adet > 2){
     printf ("Birinci = %d ve Ikinci = %d", birinci, ikinci);
     }
     
     else {
     printf ("Degerlendirilemedi");
     }
     getch ();
}
