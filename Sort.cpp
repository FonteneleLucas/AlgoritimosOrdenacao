/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sort.cpp
 * Author: lucas
 * 
 * Created on June 21, 2019, 12:33 PM
 */

#include <stdio.h>

#include "Sort.h"

Sort::Sort(int arg[], int size) {
    array = arg;
    this->size = size;
}

Sort::~Sort() {
}

void Sort::selectionSort() {
    int min = 0;
    int aux = 0;
    int trocas = 0;
    for (int i = 0; i < size - 1; i++) {
        min = i;

        for (int j = i + 1; j < size; j++) {
            if (array[min] > array[j]) {
                min = j;
            }
        }

        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
        trocas++;
    }
}

void Sort::bubbleSort() {
    int *p = array;
    int tamanho = size;
    int aux;
    int maior;
    int trocas = 0;
    int compara = 0;
    for (int x = 0; x < tamanho; x++) {
        //printf("x = %d \t",x);
        maior = x;
        aux;
        for (int y = x + 1; y < tamanho; y++) {
            // printf("x = %d \n",y);
            compara++;
            if (p[maior] > p[y]) {
                trocas++;
                aux = p[y];
                p[y] = p[maior];
                p[maior] = aux;
            }
        }

    }
//    printf("N° de trocas %d\t comparacoes %d \n", trocas, compara);
}

void Sort::show() {
    for (int i = 0; i < this->size; i++) {
        printf("%d\t", *(array + i));
    }
    printf("\n");

}


