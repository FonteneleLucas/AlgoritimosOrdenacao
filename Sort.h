/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sort.h
 * Author: lucas
 *
 * Created on June 21, 2019, 12:33 PM
 */

#ifndef SORT_H
#define SORT_H

class Sort {
public:
    Sort(int arg[], int size);
    virtual ~Sort();

    void show();
    void selectionSort();
    void bubbleSort();
    void heapSort();
    void insertSort();
private:
    int *array;
    int size;
    
    void max_heapify(int *a, int i, int tamanho);
    void removeOrdena(int tamanho);
    void buildHeapMax();
    void ordenaArray();
};

#endif /* SORT_H */

