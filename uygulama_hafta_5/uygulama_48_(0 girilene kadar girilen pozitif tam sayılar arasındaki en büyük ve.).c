// Canlý Ders Uygulamasý - No: 048
// 0 girilene kadar girilen pozitif tam sayýlar arasýndaki en büyük ve
// en küçük deðerleri bulur.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int sayi, mak = 0, min = 1000000000;
     srand(time(NULL));
     
     while (1){
     
           scanf ("%d", &sayi);
           
           if (sayi == 0){
           break;
           }
           
            if (sayi > mak){
              mak = sayi;
           }
           
           if (sayi < min){
              min = sayi;
           }
     }
     
     if(mak != 0){
     printf ("Maks = %d ve Min = %d", mak, min);
     }
     
     else {
     printf ("Herhangi bir sayi girmediniz");
     }
     getch ();
}
