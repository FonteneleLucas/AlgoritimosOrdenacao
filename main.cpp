
#include <stdio.h>

#include "Sort.h" 

int a[] = {77, 80, 78, 53, 37, 51, 55, 73, 86, 25, 18, 69, 42, 64, 44, 22, 39, 46, 32, 28, 30, 36, 19, 70, 47, 27, 5, 88, 10, 79};
int aSize = sizeof (a) / sizeof (a[0]);

int b[] = {50, 76, 68, 25, 40, 87, 35, 77, 74, 17, 2, 34, 48, 75, 82, 21, 83, 56, 9, 72, 69, 41, 63, 59, 80, 28, 31, 22, 52, 7};
int bSize = sizeof (b) / sizeof (b[0]);

int c[] = {80, 55, 20, 65, 27, 85, 46, 90, 60, 6, 12, 14, 59, 9, 83, 11, 30, 21, 54, 37, 35, 18, 24, 7, 74, 38, 86, 2, 49, 82};
int cSize = sizeof (c) / sizeof (c[0]);

int d[] = {20, 59, 40, 41, 46, 49, 13, 12, 28, 14, 65, 19, 88, 35, 18, 15, 37, 82, 5, 4, 44, 38, 69, 80, 87, 7, 78, 76, 75, 23};
int dSize = sizeof (d) / sizeof (d[0]);

int main() {
    Sort array1(a, aSize);
    Sort array2(b, bSize);
    Sort array3(c, cSize);
    Sort array4(d, dSize);
    
    array1.bubbleSort();
    array2.selectionSort();
    array3.insertSort();
    array4.heapSort();

    printf("\nArray1: ");
    array1.show();
    printf("\nArray2: ");
    array2.show();
    printf("\nArray3: ");
    array3.show();
    printf("\nArray4: ");
    array4.show();

    return 0;
}
