/* 
 * File:   lector.cpp
 * Author: justin
 *
 */

#include <cstdlib>
#include <iostream>
#include "rapidxml.hpp"//Biblioteca llamada para parsear
#include "rapidxml_utils.hpp"//Biblioteca llamada para parsear

using namespace std;
using namespace rapidxml;

int reader (void) {
     xml_document<> doc; //crea un objeto del tipo xml_document
         file<> xmlFile("newfile.xml"); //abre el archivo
         doc.parse<0>(xmlFile.data()); //parsea el archivo
         xml_node<> *raiz = doc.first_node();//encuentra el nodo raiz
         for (xml_node<> *attr = raiz->first_node();
                 attr; attr = attr->next_sibling()){//ciclo for que inspecciona
             //el archivo
             //Aquí le agrego lo que necesito para el heapclass
         }
         return 0;
}

