/* 
 * File:   Cliente_Thread.cpp
 * Author: osboxes
 * 
 * Created on 02 October 2015, 14:13
 */

#include "Cliente_Thread.h"

/**
 * contructor que inicializa la clase, este recibe dos datos, un ip, y un 
 * puerto de conexion.
 * @param iP dato tipo char*, es el IP por el cual nos conectaremos al 
 * servidor.
 * @param port dato tipo entero, este es el puerto de conexion contra el 
 * servidor.
 */
Cliente_Thread::Cliente_Thread(char* iP, int port) {
    _portno = port;
    _ip=iP;
}

/**
 * destructor de la clase.
 */
Cliente_Thread::~Cliente_Thread() {
}

/**
 * metodo que es el que va a utilizarse con los pThreads, no recibe nada, 
 * se le tiene que ingresar un NULL, si se quiere interactuar con este; no 
 * retorna nada, es meramente utilizado para los pThreads.
 * @param dato NULL, escriba NULL.
 * @return no retorna nada, esto solo se usa para los pThreads.
 */
void *Cliente_Thread::interactuar(void) {
    _sockfd = socket(AF_INET, SOCK_STREAM, cero);
    if (_sockfd < cero) 
        error(error1);
    _server = gethostbyname(_ip);
    if (_server == NULL) {
        fprintf(stderr,error3);
        exit(cero);
    }
    bzero((char *) &_serv_addr, sizeof(_serv_addr));
    _serv_addr.sin_family = AF_INET;
    bcopy((char *)_server->h_addr,(char *)&_serv_addr.sin_addr.s_addr,_server->h_length);
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

/**
 * metodo para imprimir el pantalla los errores 
 * que se presenten durante la ejecucion del servidor.
 * @param msg dato tipo "const char*" este es un string 
 * que indica el error.
 */
void Cliente_Thread::error(const char* pMsg) {
    perror(pMsg);
    exit(uno);
}

/**
 * metodo que retorna el ID del servidor.
 * @return retorna un char*, este es el ID del servidor.
 */
char* Cliente_Thread::getID() {

}

/**
 * metodo que retorna el SockFD del servidor.
 * @return  retorna un int, este el sockfd de la conexion contra el 
 * servidor.
 */
int Cliente_Thread::getSocktFd() {

}
