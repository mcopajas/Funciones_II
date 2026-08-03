#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Funcion que genera un numero aleatorio en un rango
int generarAleatorio(int minimo, int maximo) {
    return rand() % (maximo - minimo + 1) + minimo;
}

int main() {
    int minimo, maximo;

    //Inicializar el generador de numeros aleatorios
    srand(time(0));

    cout << "Ingrese el limite inferior: ";
    cin >> minimo;

    cout << "Ingrese el limite superior: ";
    cin >> maximo;

    //Verificar que el rango sea valido
    if (minimo > maximo) {
        cout << "Error: El limite inferior no puede ser mayor que el superior." << endl;
        return 1;
    }

    cout << "Numero aleatorio generado: "
         << generarAleatorio(minimo, maximo) << endl;

    return 0;
}