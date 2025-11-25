/* 
Ejercicio 4
Arreglos paralelos (nombre y edad)
1.	Crear un arreglo de tamaño 3 para almacenar nombres de personas.
2.	Crear un segundo arreglo de tamaño 3 para almacenar las edades correspondientes.
3.	Pedir al usuario que ingrese los nombres y las edades.
4.	Mostrar el nombre y la edad de cada persona. */

#include <iostream>
#include <string>   
using namespace std;

void pedirDatos(string nombres[], int edades[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese la edad de " << nombres[i] << ": ";
        cin >> edades[i];
    }
}

void mostrarDatos(const string nombres[], const int edades[], int tam) {
    cout << "\nInformacion de las personas" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "Nombre: " << nombres[i] << ", Edad: " << edades[i] << endl;
    }
}

int main() {
    const int TAMANIO = 3;
    string arregloNombres[TAMANIO];
    int arregloEdades[TAMANIO];

    pedirDatos(arregloNombres, arregloEdades, TAMANIO);
    mostrarDatos(arregloNombres, arregloEdades, TAMANIO);

    return 0;
}
