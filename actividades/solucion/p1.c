#include <stdio.h>

int contarCaracter(char *array, char ch);

int main() {
 char str[13] = "StudyTonight";
 char ch='o';
 int num=contarCaracter(str,ch);
 printf("numero de ocurrencias = %d\n", num);
}

int contarCaracter(char *array, char ch) {
  int count=0;
  while (*array != '\0'){
     if(*array==ch){
         count++;
     }
     array++;
  }
  if(count == 0){
      count = -1;
  }
  return count;
}
