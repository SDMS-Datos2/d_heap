/* 
 * File:   dlong.cpp
 * Author: justin
 *
 */

#include "dlong.h"
#include <dheap.h>

/**
 * 
 * @param pPunterodHeap
 */

dLong::dLong(void* pPunterodHeap)
{
    punteroHeap = pPunterodHeap;
}

/**
 * @brief dLong::operator = asignacion
 * Guarda el dato remotamente y lo borra localmente
 * @param pLong un dato tipo long.
 * @return un puntero tipo void.
 */
void* dLong::operator =(const long pLong){
    long _dato = pLong;
    d_pointer_size_type _puntero;
    _puntero= ((dHeap*)punteroHeap)->dMalloc(_dato, "String");
    ((dHeap*)punteroHeap)->dnew(_puntero,_dato);
}
