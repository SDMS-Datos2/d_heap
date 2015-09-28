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
#include "Constantes.h"

class Cliente :public Constantes{
public:
    Cliente(const char* pIP, int pPort);
    virtual ~Cliente();
    void interactuar(const char* pIP, int pPort);
private:
    int _sockfd, _portno, _n, _id;
    struct hostent * _server;
    char _buffer[DosCientaSeis];
    pthread_t hilos;
    struct sockaddr_in _serv_addr;
    void error(const char* pMsg);
};

#endif	/* CLIENTE_H */

