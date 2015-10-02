/* 
 * File:   Cliente_Thread.h
 * Author: osboxes
 *
 * Created on 02 October 2015, 14:13
 */

#ifndef CLIENTE_THREAD_H
#define	CLIENTE_THREAD_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include "Constantes.h"

/**
 * clase que es la que va a crear el nuevo hilo para la comunicacion contra
 * el servidor.
 */
class Cliente_Thread :public Constantes{
    
public:
    Cliente_Thread(char* iP, int port);
    virtual ~Cliente_Thread();
    void* interactuar(void);
    int getSocktFd();
    char* getID();
    static void* getInteract(void* context)
    {
        return ((Cliente_Thread*) context)->interactuar();
    }
private:
    int _sockfd, _portno, _n, _id;
    char* _ip;
    char _buffer[DosCientaSeis];
    struct hostent * _server;
    struct sockaddr_in _serv_addr;
    void error(const char* pMsg);

};

#endif	/* CLIENTE_THREAD_H */

