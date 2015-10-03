/* 
 * File:   dfloat.cpp
 * Author: justin
 *
 */
#include "dfloat.h"
#include <dheap.h>
/**
 * 
 * @param pPunterodHeap
 */
dFloat::dFloat(void* pPunterodHeap)
{
    punteroHeap = pPunterodHeap;
}

/**
 * @brief dFloat::operator = Operador de asignacion que guarda
 * el dato remotamente y lo borra de la memoria local.
 * @param pFloat dato tipo float
 * @return un pujntero tipo void.
 */
void* dFloat::operator =(const float pFloat){
    int _dato = pFloat;
    d_pointer_size_type _puntero;
    _puntero= ((dHeap*)punteroHeap)->dMalloc(_dato, "String");
    ((dHeap*)punteroHeap)->dnew(_puntero,_dato);

}
