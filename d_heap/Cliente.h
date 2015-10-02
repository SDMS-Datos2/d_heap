/* 
 * File:   Cliente.h
 * Author: osboxes
 *
 * Created on 12 September 2015, 22:56
 */

#ifndef CLIENTE_H
#define	CLIENTE_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <pthread.h>
#include <string.h>
#include "Constantes.h"
#include "Cliente_Thread.h"

/**
 * clase que se utiliza para contener los hilos de los servidores
 * que tendran la informacion si se haran los d_callocs y mas.
 * @param servers dato que va a recibir el contructor, es un dato 
 * entero, esta es la cantidad de servers con la que se va a estar trabajando.
 */
class Cliente :public Constantes{
public:
    Cliente(int servers);
    virtual ~Cliente();
    void startThread(char* pIP, int Pport);
private:
    int _servers;
    int _cantHilos;
    pthread_t* _hilos;
    Cliente_Thread *_servidores;
};

#endif	/* CLIENTE_H */

