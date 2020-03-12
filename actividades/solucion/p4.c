#include <stdio.h>
#include "shared.h"
#include <stdlib.h>


/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/

/* Funciones de test */
void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void);

/* Funciones del programa */
int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);


/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
  
  while(1){
    int size=1000;
    char str[1000];
    printf("\nDigite el string: ");
    fgets(str, size, stdin);
    stringToMayuscula(str);
    printf("\nSalida: %s\n", str);
  }
  return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones de test */

/**  
 *   @brief  Funcion para testear volverMayuscula
 *  
 *   @param  void
 *   @return void
 */
void testVolverMayuscula(void) {
  char *p_char;
  char l1 = 'a', l2 = 'z';
  p_char = &l2;
  printf("Minusculas -> %c, %c\n", l1, l2);
  volverMayuscula(&l1);
  volverMayuscula(p_char);
  printf("Mayusculas -> %c, %c\n", l1, *p_char);
}

/**  
 *   @brief  Funcion para testear esLetra
 *  
 *   @param  void
 *   @return void
 */
void testEsLetra(void) {
  char c1 = '!', c2 = 's';
  printf("%c -> %d\n", c1, esLetra(c1));
  printf("%c -> %d\n", c2, esLetra(c2));
}

void testStringToMayuscula(void) {
  char s1[] = "hola que mas!!!\n";
  char s2[] = "1234 e_-+!!hay";
  printf("Cadenas en minuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
  stringToMayuscula(s1);
  stringToMayuscula(s2);
  printf("\nCadenas en mayuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
}

int esLetra(char ch){
  char str1[28] = "abcdefghijklmnñopqrstuvwxyz";
  char str2[28] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
  if(obtenerIndice(str1,ch)>-1 || obtenerIndice(str2,ch)>-1){
    return 1;
  }
  return -1;
}

void volverMayuscula(char *ch){
  char str1[28] = "abcdefghijklmnñopqrstuvwxyz";
  char str2[28] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
  int indice=obtenerIndice(str1,*ch);
  if(indice>-1){
    *ch=str2[indice];
  }
}

void stringToMayuscula(char s[]){
  char *p=s;
  while (*p != '\0'){
     volverMayuscula(p);
     p++;
   }
}

/* Funciones del programa */

/* Codigo ya implementado en la fase 1...*/