#include <stdio.h>

// Codigo tomado de: https://en.wikibooks.org/wiki/C_Programming/stdio.h/getchar

 int main(void)
 {
   char str[1000];
   int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }
   putchar('\n');
   for (int i = 0; i < n; ++i)
      putchar(str[i]);

   putchar('\n');
   return 0;
 }

 /*¿Que hace el programa anterior?
 Lee caracteres del bufer del teclado mientras no se digite crtl+D
 almacena 1000 carateres se almacenan en un array
 y al final se imprimen en pantalla con el putchar
 
 
 
 */

/*Describa las funciones getchar y putchar
 getchar: Lee un carácter desde el buffer del teclado
 putchar: Escribe un carácter en la pantalla
*/

/*¿Cuales son las condiciones necesarias para que el primer ciclo deje de ejecutarse?
mientras no se digite crtl+D
*/