
#include "shared.h"


int obtenerIndice(char *array, char ch) {
  int index=0;
  while (*array != '\0'){
     if(*array==ch){
         return index;
     }
     index++;
     array++;
  }
 return -1;
}