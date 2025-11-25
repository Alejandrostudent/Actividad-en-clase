/* Ejercicio 3
1. Ingresar el tamaño de un arreglo
Permite que el usuario indique cuántos elementos tendrá el arreglo.
2. Llenar un arreglo
El usuario ingresa los valores para completar el arreglo.
3. Buscar una posición y mostrar su información
El usuario escribe una posición y el programa muestra el dato almacenado allí. */

#include <iostream>
using namespace std;


int obtenerTamano() {
    int tam;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;
    return tam;
}

void llenarArreglo(int arreglo[], int tam) {
    for (int x = 0; x < tam; x++) {
        cout << "Ingrese el valor para la posición " << x + 1 << ": ";
        cin >> arreglo[x];
    }
}

void posicion(int arreglo[], int tam) {
    int posicion;
    cout << "Ingrese la posición que desea visualizar: ";
    cin >> posicion;

    if (posicion >= 0 && posicion < tam) {
        cout << "El valor en la posición " << posicion << " es: " << arreglo[posicion] << endl;
    } else {
        cout << "Posición fuera de rango";
    }
}

int main() {
    int tam = obtenerTamano();
    int arreglo[tam]; 
    llenarArreglo(arreglo, tam);
    posicion (arreglo, tam);

    return 0;
}
