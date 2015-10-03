#ifndef DFLOAT_H
#define DFLOAT_H

using namespace std;

/**
 * @brief The dFloat class Clase envoltorio
 * para los datos tipo float.
 * @author Diego Granados Ly
 */
class dFloat
{
public:
    dFloat(void *pPunterodHeap);
    void* operator=(const float pFloat);
private:
    void* punteroHeap;
};

#endif // DFLOAT_H
