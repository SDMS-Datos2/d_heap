/* 
 * File:   Cliente.cpp
 * Author: osboxes
 * 
 * Created on 12 September 2015, 22:56
 */

#include "Cliente.h"

using namespace std;
/**
 * constructor que inicializa la clase y recibe la cantidad maxima de 
 * servidores que proveen memoria.
 * @param servers dato entero que es la cantidad de servidores con la vamos a
 * arrancar.
 */
Cliente::Cliente(int servers) {
    _servers=servers;
    _cantHilos=cero;
    _hilos=(pthread_t *) malloc(_servers*sizeof(pthread_t));
    _servidores=(Cliente_Thread*)malloc(_servers*sizeof(Cliente_Thread));
}

/**
 * destructor de la clase.
 */
Cliente::~Cliente() {
    free(_hilos);
    free(_servidores);
}

/**
 * metodo que inicializa los hilos de comunicacion contra los servidores
 * @param pIP dato char* que es la direccion IP del servidor.
 * @param Pport dato que es un entero, es el numero de puerto para la conexion
 * contra el servidor.
 */
void Cliente::startThread(char* pIP, int Pport) {
    _servidores=new Cliente_Thread(pIP,Pport);
    //pthread_create(_hilos,NULL,&Cliente_Thread::getInteract,_servidores);
    if(_cantHilos<_servers){
        _servidores++;_cantHilos++;_hilos++;
    }
}

