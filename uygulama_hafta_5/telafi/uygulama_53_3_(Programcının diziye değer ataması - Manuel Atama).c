// Canl� Ders Uygulamas� - No: 053_3
// Programc�n�n diziye de�er atamas� - Manuel Atama
// Programc�n�n atad��� 5 de�eri diziye atar ve ekrana yazd�r�r.

#include <stdio.h>

main (){

     int ali [5] = {1, 2, 3, 4, 5}, i;
     
// Diziye manuel olarak bir de�er atarsak, ali [5] = {1}, di�er de�erler 0 olur
// 1 0 0 0 0 

     for (i=0; i<5; i++){
         printf ("%d ", ali[i]);
     }

     getch ();
}
