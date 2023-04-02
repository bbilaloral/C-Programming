// Canlý Ders Uygulamasý - No: 040_2
// Kullanýcýnýn girdiði bir tam sayýyý 5'in en yakýn katýna yuvarlar.
// AÞAÐIYA DOÐRU ÝLERLE ve YUKARIYA DOÐRU ÝLERLE
// ÝKÝ FARKLI YÖNDE HAREKET

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
