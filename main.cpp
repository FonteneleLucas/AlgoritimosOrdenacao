
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <time.h>
#include "Sort.h" 
#include "BuildArray.h"

using namespace std;

int main() {

    BuildArray teste(10,2);
    BuildArray teste2(10,1);
    BuildArray teste3(10,3);
    

    printf("ALEATORIOS:\n");
    teste.show();
    teste2.show();
    teste3.show();
 
    Sort array1(teste.getArray(), 10);
    Sort array2(teste2.getArray(), 10);
    Sort array3(teste3.getArray(), 10);
    
    array1.bubbleSort();
    //array2.heapSort();
    array3.insertSort();
   
    printf("Ordenados:\n");
    printf("\nArray1: ");
    array1.show();
    printf("\nArray2: ");
    array2.show();
    printf("\nArray3: ");
    array3.show();
    
    printf("\nArray 1 Is sorted: %s", (array1.isSort() == true ? "True" : "False"));
    printf("\nArray 2 Is sorted: %s", (array2.isSort() == true ? "True" : "False"));
    printf("\nArray 3 Is sorted: %s", (array3.isSort() == true ? "True" : "False"));
    printf("\n");
    

    return 0;
}
