/* 
 * File:   Constantes.h
 * Author: osboxes
 *
 * Created on 12 September 2015, 22:56
 */

#ifndef CONSTANTES_H
#define	CONSTANTES_H

class Constantes {
public:
    /**
     * bandera de debug
     */
    static const bool _debug=true;
    /**
     * cero=0
     */
    static const int cero=0;
    /**
     * uno=1
     */
    static const int uno=1;
    /**
     * dos=2
     */
    static const int dos=2;
    /**
     * tres=3
     */
    static const int tres=3;
    /**
     * cuatro=4
     */
    static const int cuatro=4;
    /**
     * cinco=5
     */
    static const int cinco=5;
    /**
     * DosCincoSeis=256
     */
    static const int DosCientaSeis=256;
    /**
     * QuinDoce=512
     */
    static const int QuinDoce=512;
    /**
     * "ERROR opening socket"
     */
    static const char* error1;
    /**
     * "ERROR connecting"
     */
    static const char* error2;
    /**
     * "ERROR, no such host"
     */
    static const char* error3;
    /**
     * "ERROR writing to socket"
     */
    static const char* error4;
    /**
     * "ERROR reading from socket"
     */
    static const char* error5;
    /**
     * metodo que recibe una linea caracteres y retorna la cantidad 
     * de letras que contiene.
     * @param msg dato tipo char*, este el mensaje que se le quiere calcular 
     * el largo.
     * @return retorna un dato tipo entero que es el largo del mensaje que 
     * se le paso.
     */
    int getLenght(const char* msg);
    
};

#endif	/* CONSTANTES_H */

