#ifndef DLONG_H
#define DLONG_H

using namespace std;

/**
 * @brief The dLong class Clase envoltorio
 * para los datos tipo long.
 * @author Diego Granados Ly
 */
class dLong
{
public:
    dLong(void *pPunterodHeap);
    void* operator=(const long pLong);
private:
    void* punteroHeap;
};

#endif // DLONG_H
