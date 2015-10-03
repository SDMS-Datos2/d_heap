#ifndef DCHAR_H
#define DCHAR_H

using namespace std;

/**
 * @brief The dChar class Clase envoltorio
 * para los datos tipo char.
 * @author Diego Granados Ly
 */
class dChar
{
public:
    dChar(void *pPunterodHeap);
    void* operator=(const char pChar);
private:
    void* punteroHeap;
};

#endif // DCHAR_H
