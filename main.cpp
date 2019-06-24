
#include <stdio.h>
#include <stdbool.h>
#include <iostream>

#include "Sort.h" 
#include "BuildArray.h"

using namespace std;

int main() {

    BuildArray teste(5);
    BuildArray teste2(10);
    BuildArray teste3(15);
    BuildArray teste4(20);

    printf("ALEATORIOS:\n");
    teste.show();
    teste2.show();
    teste3.show();
    teste4.show();
    printf("\n");

    Sort array1(teste.getArray(), 5);
    Sort array2(teste2.getArray(), 10);
    Sort array3(teste3.getArray(), 15);
    Sort array4(teste4.getArray(), 20);

    array1.bubbleSort();
    array2.selectionSort();
    array3.insertSort();
    array4.heapSort();
    
    printf("Ordenados:\n");
    printf("\nArray1: ");
    array1.show();
    printf("\nArray2: ");
    array2.show();
    printf("\nArray3: ");
    array3.show();
    printf("\nArray4: ");
    array4.show();
    
    /*printf("\nArray 1 Is sorted: %s", (array1.isSort() == true ? "True" : "False"));
    printf("\nArray 2 Is sorted: %s", (array2.isSort() == true ? "True" : "False"));
    printf("\nArray 3 Is sorted: %s", (array3.isSort() == true ? "True" : "False"));
    printf("\nArray 4 Is sorted: %s", (array4.isSort() == true ? "True" : "False"));*/
    

    return 0;
}
