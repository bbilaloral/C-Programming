// Canlý Ders Uygulamasý - No: 055
// 2020-21 - Vize Mazeret Sýnavý - Soru 4

// Belirtilen adet kadar rastgele rakam üretir, ardýndan bunlar
// arasýnda istenen rakamý iþaretler.

/*

Rakam adedini giriniz: 8
Isaretlemek istediginiz rakami giriniz: 3

5 2 3 2 2 5 3 6
    X       X

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int dizi [100], adet, isaret, i;
     srand(time(NULL));
     
     printf ("Rakam adedini giriniz: ");
     scanf ("%d", &adet);
     
     printf ("Isaretlemek istediginiz rakami giriniz: ");
     scanf ("%d", &isaret);
     
     printf("\n");
     
     for (i=0; i<adet; i++){
         
         dizi[i] = rand() % 10;
         printf("%d ", dizi[i] );
     }
     
     printf ("\n");
     
     for (i=0; i<adet; i++){
         
         if (dizi[i] == isaret){
            printf("X ");
            
         }
         else {
            printf("  ");
         }
     }
     
     getch ();
}
