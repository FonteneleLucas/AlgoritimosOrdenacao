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
#include <iostream>
#include <ctime>
#include <ratio>
#include <stdio.h>
#include <stdbool.h>
#include <chrono> 
#include <time.h>
#include "Sort.h"
using namespace std;

Sort::Sort(int arg[], int size) {
    array = arg;
    this->size = size;

}

Sort::~Sort() {
}

double Sort::selectionSort() {
   
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

    return 0.2;
}

double Sort::bubbleSort() {
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
    return 0.2;
    //    printf("N° de trocas %d\t comparacoes %d \n", trocas, compara);
}

void Sort::max_heapify(int *a, int i, int tamanho) {
    int esq, dir, maior, aux;

    esq = (2 * i) + 1;
    dir = (2 * i) + 2;
    maior = i;

    if (esq < tamanho) {
        if (a[esq] > a[i]) {
            maior = esq;
        }
    }

    if (dir < tamanho) {
        if (a[esq] > a[i] || a[dir] > a[i]) {
            if (a[esq] > a[dir]) {
                maior = esq;
            } else {
                maior = dir;
            }
        }
    }

    if (maior != i) {
        aux = a[i];
        a[i] = a[maior];
        a[maior] = aux;
        max_heapify(a, maior, tamanho);
    }
}

void Sort::removeOrdena(int tamanho) {

    int prioridade = array[0];
    array[0] = array[tamanho - 1];
    array[tamanho - 1] = 0;
    tamanho--;

    max_heapify(array, 0, tamanho);
    array[tamanho] = prioridade;
}

void Sort::buildHeapMax() {
    for (int i = ((size / 2) - 1); i >= 0; i--) {
        max_heapify(array, i, size);
    }
}

void Sort::ordenaArray() {
    for (int i = 0; i < size; i++) {
        removeOrdena(size - i);
    }
}

double Sort::heapSort() {

    buildHeapMax();
    ordenaArray();
    
    return 0.2;

}

void Sort::show() {
    for (int i = 0; i < this->size; i++) {
        printf("%d\t", *(array + i));
    }
    printf("\n");

}

double Sort::insertSort() {
    int *p = array;
    int tamanho = size;
    int comp = 0;
    for (int x = 1; x < tamanho; x++) {
        int aux = p[x];
        int i = x - 1;
        //printf("%d > %d ???\n",p[i],aux);
        while (i >= 0 && p[i] > aux) {
            comp++;
            //            printf("%d° %d > %d\n",comp,p[i],aux);
            p[i + 1] = p[i];
            //comp++;
            i--;
        }

        p[i + 1] = aux;
        //show(p,tamanho);

    }
  
    return 0.2;
    //printf("comp %d \n",comp);
}

bool Sort::isSort() {
    for (int i = 0; i < size - 1; i++) {
        if ((array[i + 1] - array[i]) <= 0) {
            return false;
        }

    }

    return true;

}


