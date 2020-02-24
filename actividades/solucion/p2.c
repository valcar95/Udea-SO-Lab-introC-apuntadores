#include <stdio.h>

int obtenerIndice(char *array, char ch);

int main() {
 char str[13] = "StudyTonight";
 char ch='w';
 int num=obtenerIndice(str,ch);
 printf("primera ocurrencia en la posición = %d\n", num);
}

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
