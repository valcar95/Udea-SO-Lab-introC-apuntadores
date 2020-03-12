#include <stdio.h>
#include "shared.h"

int main() {
 char str[13] = "StudyTonight";
 char ch='u';
 int num=obtenerIndice(str,ch);
 printf("primera ocurrencia en la posición = %d\n", num);
}

