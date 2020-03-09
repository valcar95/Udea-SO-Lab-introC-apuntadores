/*
Problema de programación: Dado un vector x de n elementos reales, donde n es impar, diseñar una función que calcule y devuelva la mediana de ese vector. La mediana es el valor tal que la mitad de los números son mayores que el valor y la otra mitad son menores. Escribir un programa que compruebe la función.
*/

#include <stdio.h>
#include <ctype.h>




int main(void) {

    int n = readInt();
    float realVector[n];
    float *p = realVector;
    vectorConstruction(p, n);
    medianCalculation(p, n);
}

void vectorConstruction(float * p, int n){
    for (int i = 0; i < n; i++){
        printf("Ingrese un número real para la posición: %d \n", i); 
        scanf("%f", (p+i));
    }
}
   
int readInt() {
        int d;
        printf("Ingrese por favor un número impar \n");
        scanf("%d", &d);
        if( d%2  == 0){
            printf("\nIngrese por favor un número impar \n");
            d = readInt();
        }
        return d;
    }

void medianCalculation(float * p, int n){
    arraySort(p,n);
    float median=0;
    median = *(p + n)/2;
    printf("Median: %f", median);
    return median;
}

void arraySort(float *array, int n){
    int i=0 , j=0 , temp=0;
     for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }
}