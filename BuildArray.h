/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuildArray.h
 * Author: lucas
 *
 * Created on June 24, 2019, 10:57 AM
 */

#ifndef BUILDARRAY_H
#define BUILDARRAY_H

class BuildArray {
public:
    BuildArray(int tamanho);
    BuildArray(const BuildArray& orig);
    virtual ~BuildArray();

    void show();
    void generator();
    inline 
    int * getArray(){
        return this->array;
    }
private:
    int * array;
    int size;

};

#endif /* BUILDARRAY_H */

