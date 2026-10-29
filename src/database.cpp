//Este archibo impkementa las funciones creadas en database.h y contiene la lógica para conectarse al sqlite
#include "database.h" //Extrae las funciones del documento
#include <iostream>

sqlite3* db = nullptr; //Crea una conexión con la base de datos

bool conectarBaseDatos() {
    int resultado = sqlite3_open("data/cine.db", &db);

    if (resultado == SQLITE_OK) {//Indica que le conexión se estableció correctamente
        std::cout << "Base de datos conectada correctamente." << std::endl;
        return true;
    } else {
        std::cout << "Error al conectar: "
                << sqlite3_errmsg(db) << std::endl; //uestra el motivo del error si falla
        return false;
    }
}

void cerrarBaseDatos() { //Cierra la conexión para liberar recursos
    if (db != nullptr) {
        sqlite3_close(db);
        db = nullptr;
    }
}