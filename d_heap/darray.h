#ifndef DARRAY_H
#define DARRAY_H

using namespace std;

/**
 * @brief The dArray class Clase envoltorio
 * para las colecciones de datos.
 * @author Diego Granados Ly
 */
class dArray
{
public:
    dArray(void* pPunterodHeap);
//    void* operator=(const array pArray);
private:
    void* punteroHeap;
};

#endif // DARRAY_H
