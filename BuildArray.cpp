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

BuildArray::BuildArray(int tamanho,int _tipo) {
     
    size = tamanho;
    tipo=_tipo;
    generator();
     
}

BuildArray::BuildArray(const BuildArray& orig) {
}

BuildArray::~BuildArray() {
}
long int BuildArray::NAleatorio(long int maxi){
    int y = rand() % maxi;
    return y;
}
void BuildArray::show() {
    //    printf("Tamanho: %d; ", size);
    for (int i = 0; i < this->size; i++) {
        printf("%d\t", *(array + i));
    }
    printf("\n");

}

void BuildArray::generator() {
    
    srand(10);
    array = new int[this->size];
    for (int x = 0; x < size; x++) {
        if (tipo == 1) {
            
            array[x] = x + 1;
        } else if (tipo == 2) {
            array[x] = size - x;
        } else if (tipo == 3) {

            bool add = true;
            int num = NAleatorio(size * 10);
            for (int k = 0; k < x; k++) {
                if (num == array[k]) {

                    x--;
                    k = x;
                    add = false;
                }
            }
            if (add) {
                array[x] = num;
            }

        }
    }
}