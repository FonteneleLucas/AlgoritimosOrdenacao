
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <time.h>
#include "Sort.h" 
#include "BuildArray.h"

using namespace std;

int main() {
    int tamanho = 1000;
    int type = 2;
    BuildArray teste(tamanho, type);
    BuildArray teste2(tamanho, type);
    BuildArray teste3(tamanho, type);
    BuildArray teste4(tamanho, type);


    //printf("ALEATORIOS:\n");
    //    teste.show();
    //   teste2.show();
    //    teste3.show();
    //    teste4.show();

    Sort array1(teste.getArray(), tamanho);
    Sort array2(teste2.getArray(), tamanho);
    Sort array3(teste3.getArray(), tamanho);
    Sort array4(teste4.getArray(), tamanho);

    printf("tamanho : %d tipo : %d\n", tamanho, type);
    array1.selectionSort();
    printf(" trocas %d\n", array1.getTrocas());
    array2.bubbleSort();
    printf(" trocas %d\n", array2.getTrocas());
    array3.insertSort();
    printf(" trocas %d\n", array3.getTrocas());
    array4.heapSort();
    printf(" trocas %d\n", array4.getTrocas());





   /* printf("Ordenados:\n");
    printf("\nArray1: ");
    array1.show();
    printf("\nArray2: ");
    array2.show();
    printf("\nArray3: ");
    array3.show();
    printf("\nArray4: ");
    array4.show();*/

    //    printf("\nArray 1 Is sorted: %s", (array1.isSort() == true ? "True" : "False"));
    //    printf("\nArray 2 Is sorted: %s", (array2.isSort() == true ? "True" : "False"));
    //    printf("\nArray 3 Is sorted: %s", (array3.isSort() == true ? "True" : "False"));
    //    printf("\n");


    return 0;
}
