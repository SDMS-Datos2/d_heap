/* 
 * File:   dint.cpp
 * Author: justin
 *
 */

#include "dint.h"
#include <dheap.h>
/**
 * 
 * @param pPunterodHeap
 */
dInt::dInt(void* pPunterodHeap)
{
    punteroHeap = pPunterodHeap;
}

/**
 * @brief dInt::operator = operador de asignacion que guarda
 * el dato remotante y lo borra de la memoria local.
 * @param pInt dato tipo int
 * @return un puntero void.
 */
void* dInt::operator =(const int pInt){
    int _dato = pInt;
    d_pointer_size_type _puntero;
    _puntero= ((dHeap*)punteroHeap)->dMalloc(_dato, "String");
    ((dHeap*)punteroHeap)->dnew(_puntero,_dato);

}
