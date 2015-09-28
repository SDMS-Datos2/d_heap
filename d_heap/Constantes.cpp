/* 
 * File:   Constantes.cpp
 * Author: osboxes
 * 
 * Created on 12 September 2015, 22:56
 */

#include "Constantes.h"

#include <string.h>
using namespace std;

const char* Constantes::error1="ERROR opening socket";
const char* Constantes::error2="ERROR connecting";
const char* Constantes::error3="ERROR, no such host\n";
const char* Constantes::error4="ERROR writing to socket";
const char* Constantes::error5="ERROR reading from socket";

int Constantes::getLenght(const char* msg) {
    return strlen(msg);
}