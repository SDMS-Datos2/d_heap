/* 
 * File:   main.cpp
 * Author: osboxes
 *
 * Created on 20 September 2015, 19:36
 */
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include "Cliente.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Cliente * nuevo = new Cliente("127.0.0.1",6200);
    //void * dato = malloc(2*sizeof(int));
    //cout<< dato<< endl;
    //dato;
    //int i4=(intptr_t)dato;
    //int i2=(uintptr_t)dato;
    //volatile intptr_t i3=(intptr_t)dato;
    //printf("hexadecimal: %x\n", i4);
    /**void* dato=(int * )malloc(2*sizeof(int));
    void* dato2= dato;
    (dato2+=1)=dato+=1;
    cout<<dato2<<endl;
    dato2-=1;
    cout<<dato2<<endl;*/
    return 0;
}

