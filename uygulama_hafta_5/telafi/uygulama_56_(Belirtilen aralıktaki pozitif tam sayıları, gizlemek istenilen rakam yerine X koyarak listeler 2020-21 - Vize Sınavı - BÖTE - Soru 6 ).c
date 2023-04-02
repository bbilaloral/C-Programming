// Canlý Ders Uygulamasý - No: 056
// 2020-21 - Vize Sýnavý - BÖTE - Soru 6

// Belirtilen aralýktaki pozitif tam sayýlarý, gizlemek istenilen
// rakam yerine X koyarak listeler.

/*

Sayi araligini giriniz: 96 104
Gizlemek istediginiz rakami giriniz: 1

96 97 98 99 X00 X0X X02 X03 X04

*/

#include <stdio.h>

main (){
     
     int dizi [10], sayi, i, ilk, son, gizli, adet;
     
     printf ("Sayi araligini giriniz: ");
     scanf ("%d %d", &ilk, &son);
     
     printf ("Gizlemek istediginiz rakami giriniz: ");
     scanf ("%d", &gizli);
     printf ("\n");
     
     for (i=ilk; i<=son; i++){
     
         sayi = i;
         adet = 0;
         
         while (sayi > 0){
               
               dizi[adet] = sayi % 10;
               sayi = sayi / 10;
               adet ++;
               
         }
         
         while (adet > 0){
               
               if (dizi[adet-1] == gizli){
                  printf("X");
               }
               else {
                  printf("%d", dizi[adet-1]);
               }
               
               adet --;      
         }
         
         printf (" ");
         
     } 
      
     getch ();
}
