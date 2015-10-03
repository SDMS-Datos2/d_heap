#ifndef DINT_H
#define DINT_H

#include <d_pointer_size_type.h>

using namespace std;

/**
 * @brief The dInt class Clase envoltorio
 * para los datos tipo int.
 * @author Diego Granados Ly
 */
class dInt
{
public:
    dInt(void *pPunterodHeap);
    void* operator=(const int pInt);
private:
    void* punteroHeap;
};

#endif // DINT_H
