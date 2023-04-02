// Canl� Ders Uygulamas� - No: 058
// 2019-20 - Yaz Okulu - Final S�nav� - MAT - Soru 3

// Girilen say� adedine (< 10) g�re; her sat�rda 1 ila 9 aras�nda
// (bu de�erler dahil) rastgele say� �retir, alt alta gelen herhangi
// iki say� ayn� oldu�unda sonlan�r ve bu s�reci ekranda g�sterir.

/*

Ayni satirdaki sayi adedini giriniz: 6

9 9 8 5 7 2
4 3 2 6 6 4
3 2 1 7 8 8
5 7 7 6 3 2
6 5 7 4 4 1

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int alt [10] = {0}, ust [10] = {0}, i, adet, cikis;
     srand(time(NULL));
     
     printf ("Ayni satirdaki sayi adedini giriniz : ");
     scanf ("%d", &adet);
     
     while (1){
     
           printf ("\n");
     
           for (i=0; i<adet; i++){
               
               alt[i] = 1 + rand() % 9;
               printf ("%d ", alt[i]);
           }
           
           cikis = 0;
           
           for (i=0; i<adet; i++){
               
               if (alt[i] == ust[i]){
                  cikis = 1;
               }
           }
           
           if (cikis == 1)
              break;
           
           for (i=0; i<adet; i++){
               ust[i] = alt[i];
           }
     }
     
     getch ();
}
