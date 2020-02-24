#include <stdio.h>

char *obtenerSubcadena(char *array, int index);

int main() {
 char str[13] = "hola que tal";
 char index=4;
 char *sub=obtenerSubcadena(str,index);
 printf("subcadena= %s\n", sub);
}

char *obtenerSubcadena(char *array, int index) {
  return (array+index);
}
