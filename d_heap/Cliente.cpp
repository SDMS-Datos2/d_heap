/* 
 * File:   Cliente.cpp
 * Author: osboxes
 * 
 * Created on 12 September 2015, 22:56
 */

#include <string.h>
#include "Cliente.h"

using namespace std;

/**
 * constructor que inicializa los datos con el cliente y arranca el listener
 * que va a estar escuchando los pedidos del servidor y hacer lo que se le 
 * pide.
 * @param pIP dato tipo char* que es el ip del servidor al cual nos 
 * conectaremos.
 * @param pPort dato tipo entero que es el puerto por el cual nos conectamos
 * al server.
 */
Cliente::Cliente(const char* pIP, int pPort) {
    /*_portno = pPort;
    _sockfd = socket(AF_INET, SOCK_STREAM, cero);
    if (_sockfd < cero) 
        error(error1);
    _server = gethostbyname(pIP);
    if (_server == NULL) {
        fprintf(stderr,error3);
        exit(cero);
    }
    bzero((char *) &_serv_addr, sizeof(_serv_addr));
    _serv_addr.sin_family = AF_INET;
    bcopy((char *)_server->h_addr, 
         (char *)&_serv_addr.sin_addr.s_addr,_server->h_length);
    _serv_addr.sin_port = htons(_portno);
    if (connect(_sockfd, (struct sockaddr *) &_serv_addr, 
            sizeof(_serv_addr)) < cero) 
        error(error2);
    if(_debug)
        printf("Please enter the message: ");
    interactuar();
    close(_sockfd);*/
    interactuar( pIP, pPort);
}

/**
 * destructor de la clase.
 */
Cliente::~Cliente() {
}

/**
 * metodo que retorna a consola si hubo un error de consola.
 * @param pMsg dato tipo char* que es el mensaje de error que se
 * genera.
 */
void Cliente::error(const char* pMsg) {
    perror(pMsg);
    exit(uno);
}

/**
 * metodo que interactua contra el servidor para enviar y recibir mensajes.
 */
void Cliente::interactuar(const char* pIP, int pPort) {
    _portno = pPort;
    _sockfd = socket(AF_INET, SOCK_STREAM, cero);
    if (_sockfd < cero) 
        error(error1);
    _server = gethostbyname(pIP);
    if (_server == NULL) {
        fprintf(stderr,error3);
        exit(cero);
    }
    bzero((char *) &_serv_addr, sizeof(_serv_addr));
    _serv_addr.sin_family = AF_INET;
    bcopy((char *)_server->h_addr,
         (char *)&_serv_addr.sin_addr.s_addr,_server->h_length);
    _serv_addr.sin_port = htons(_portno);
    if (connect(_sockfd, (struct sockaddr *) &_serv_addr, 
            sizeof(_serv_addr)) < cero) 
        error(error2);
    if(_debug)
        printf("Please enter the message: ");
    //////////////////////////////////////////
    while(true){
        bzero(_buffer,DosCientaSeis);
        fgets(_buffer,DosCientaSeis-uno,stdin);
        _n = write(_sockfd, _buffer, getLenght(_buffer));
        if (_n < cero) 
             error(error4);
        bzero(_buffer,DosCientaSeis);
        _n = read(_sockfd, _buffer, DosCientaSeis-uno);
        if (_n < cero) 
             error(error5);
        if(_debug)
            printf("%s\n", _buffer);
    }
}
