// Canlý Ders Uygulamasý - No: 057
// 2018-19 - Vize Sýnavý - Soru 2

// Girilen birbirlerinden farklý yedi tam sayýnýn ortancasýný bulur.
// Not: Tam sayýlar küçükten büyüðe doðru sýralandýðýnda; dizinin
// ortasýndaki sayý, farklý bir deyiþle solundaki ve saðýndaki sayý
// adedi ayný olan sayý ortanca olarak adlandýrýlýr.

/*

Yedi farkli sayi giriniz: 58 6 788 9 0 14 91 
Ortanca sayi: 14

*/

/*
58 6 788 9 0 14 91
--------------------
6 58 788 9 0 14 91
6 58 788 9 0 14 91
6 58 9 788 0 14 91
6 58 9 0 788 14 91 
6 58 9 0 14 788 91
6 58 9 0 14 91 788


1-2
2-3
3-4
4-5
5-6
6-7


6 58 9 0 14 91 788
-------------------
6 58 9 0 14 91 788
6 9 58 0 14 91 788
6 9 0 58 14 91 788
6 9 0 14 58 91 788
6 9 0 14 58 91 788
6 9 0 14 58 91 788

*/

#include <stdio.h>

main (){
     
     int dizi[7], i, j, depo;
     
     printf ("Yedi farkli tam sayi giriniz : ");
     
     for (i=0; i<7; i++){
         scanf ("%d", &dizi [i]);
     }
     
     for (i=0; i<7; i++){
     
         for (j=0; j<6; j++){
             
             if (dizi[j] > dizi[j+1]){
                
                depo = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = depo;
             }
         }
     }

         printf("Ortanca Sayi : %d ", dizi[3]);
     
     getch ();
}
