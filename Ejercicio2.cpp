/* Ejercicio 2
Arreglos paralelos (nombre y edad)
1.	Crear un arreglo de tamaño 3 para almacenar nombres de personas.
2.	Crear un segundo arreglo de tamaño 3 para almacenar las edades correspondientes.
3.	Pedir al usuario que ingrese los nombres y las edades.
4.	Mostrar el nombre y la edad de cada persona.*/

#include <iostream>
#include <string>   
using namespace std;

string arregloNombres[3];
int arregloEdades[3];

int main() {
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        getline(cin, arregloNombres[i]);
        cout << "Ingrese la edad de " << arregloNombres[i] << ": ";
        cin >> arregloEdades[i];
        cin.ignore(); 
    }

    cout << "\nInformación de las personas" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << arregloNombres[i] << ", Edad: " << arregloEdades[i] << endl;
    }

    return 0;
}   