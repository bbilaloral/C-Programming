
// Canl� Ders Uygulamas� - No: 044
// Bilgisayar�n 1 - 100 aras�nda tuttu�u bir say�y� tahmin etme oyunu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){

     int bilgisayar, tahmin, hak = 0;
     srand(time(NULL));
     
     bilgisayar = 1 + (rand () % 100);
     //printf ("%d \n", bilgisayar);
     
     while (hak < 10){
     
           printf ("%d. Tahmininizi giriniz : ", hak + 1);
           scanf ("%d", &tahmin);
           
           hak ++;
           
           if (tahmin > bilgisayar){
              printf ("DAHA DUSUK");
              printf (" || Kalan Tahmin hakkin = %d\n\n", 10 - hak);
           }
           
           else if (tahmin < bilgisayar){
                printf ("DAHA YUKSEK");
                printf (" || Kalan Tahmin hakkin = %d\n\n", 10 - hak);
           }
           
           else if (tahmin == bilgisayar){
                printf ("TEBRIKLER BILDIN\n\n");
                break;
           }
     
     }
     
     if (tahmin != bilgisayar){
     
        printf ("Tahmin Hakkiniz Tukendi Kaybettiniz");          
     }
     
     getch ();
}
