// Canlý Ders Uygulamasý - No: 048_2
// 0 girilene kadar girilen pozitif tam sayýlar arasýndaki en büyük ve
// en küçük deðerleri bulur.

#include <stdio.h>

main (){
     
     int sayi, mak, min, adet = 0;
     
     while (1){
     
           scanf ("%d", &sayi);
           adet ++;
           
           if (sayi == 0){
           break;
           }
           
           if (sayi > mak || adet == 1){
              mak = sayi;
           }
           
           if (sayi < min || adet == 1){
              min = sayi;
           }
     }
     
     if(adet > 0){
     printf ("Maks = %d ve Min = %d", mak, min);
     }
     
     else {
     printf ("Herhangi bir sayi girmediniz");
     }
     getch ();
}
