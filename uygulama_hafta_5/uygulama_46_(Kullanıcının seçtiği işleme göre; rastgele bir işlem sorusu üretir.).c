// Canlý Ders Uygulamasý - No: 046
// Kullanýcýnýn seçtiði iþleme göre; rastgele bir iþlem sorusu üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int sayi1, sayi2, islem, yanit, gercek;
     srand(time(NULL));
     
     printf ("Toplama = 1, Cikarma = 2 ve Carpma = 3\n");
     printf ("Islem numaranizi giriniz : ");
     scanf ("%d", &islem);
     
     sayi1 = (rand () % 10);
     sayi2 = (rand () % 10);
     
     switch (islem){
     
            case 1:
            printf ("\n%d + %d = ", sayi1, sayi2);
            scanf ("%d", &yanit);
            gercek = sayi1 + sayi2;
            break;
            
            case 2:
            printf ("\n%d - %d = ", sayi1, sayi2);
            scanf ("%d", &yanit);
            gercek = sayi1 - sayi2;
            break;
            
            case 3:
            printf ("\n%d x %d = ", sayi1, sayi2);
            scanf ("%d", &yanit);
            gercek = sayi1 * sayi2;
            break;
            
     }
     
     if (islem < 1 || islem > 3){
        printf ("Hatali islem yaptiniz.");
     }
     else if (yanit == gercek){
        printf ("Tebrikler dogru cevap");
     }
     else {
        printf ("Hatali cevap");
     }
     
     getch ();

}
