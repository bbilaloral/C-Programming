// Canlı Ders Uygulaması - No: 045
// Kullanıcının 1 - 100 arasında tuttuğu bir sayıyı bulur

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
     
     int tahmin, yanit, altlimit = 1, ustlimit = 100;
     srand(time(NULL));
     
     while (1){
     
           tahmin = altlimit + (rand() % (ustlimit-altlimit+1));
           
           printf ("Tahminim : %d\n", tahmin);
           printf ("Yanitin : ");
           scanf ("%d", &yanit);
           printf ("\n");
           
           if (yanit == 1){
              altlimit = tahmin + 1;
           }
           
           else if (yanit == 2){
              ustlimit = tahmin - 1;
           }
           
           else {
                printf ("Bildim !!!");
                break;
           }
     }
     
     
     
     getch ();

}
