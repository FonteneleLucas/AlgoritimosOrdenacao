/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuildArray.cpp
 * Author: lucas
 * 
 * Created on June 24, 2019, 10:57 AM
 */

#include "BuildArray.h"
#include <stdio.h>
#include <ctime>
#include <cstdlib> 

BuildArray::BuildArray(int tamanho) {
    size = tamanho;
    generator();
}

BuildArray::BuildArray(const BuildArray& orig) {
}

BuildArray::~BuildArray() {
}

void BuildArray::show() {
    //    printf("Tamanho: %d; ", size);
    for (int i = 0; i < this->size; i++) {
        printf("%d\t", *(array + i));
    }
    printf("\n");

}

void BuildArray::generator() {
    srand(time(NULL));
    array = new int[this->size];
    for (int i = 0; i < size; i++) {
        int r = (rand() % size) + 1;
        array[i] = r;
    }
}