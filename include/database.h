//Este documento declara las funciones para conectar el proyecto con la base de datos
#ifndef DATABASE_H 
#define DATABASE_H
//Evita que el archivo se incluya varias veces

#include <string> //Permite usar cadenas de texto
#include "sqlite3.h" //Incorpora las funciones necesarias para trabajas con sqlite

bool conectarBaseDatos(); //Abrir la base de datos
void cerrarBaseDatos(); //Cerrar la base de datos

#endif