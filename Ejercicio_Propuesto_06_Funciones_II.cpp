#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Funcion que determina el ganador
void determinarGanador(int jugador, int computadora) {
    cout << "\nLa computadora eligio: ";

    switch (computadora) {
        case 1:
            cout << "Piedra";
            break;
        case 2:
            cout << "Papel";
            break;
        case 3:
            cout << "Tijeras";
            break;
    }

    cout << endl;

    if (jugador == computadora) {
        cout << "Empate!" << endl;
    }
    else if ((jugador == 1 && computadora == 3) ||
             (jugador == 2 && computadora == 1) ||
             (jugador == 3 && computadora == 2)) {
        cout << "Ganaste!" << endl;
    }
    else {
        cout << "La computadora gana!" << endl;
    }
}

int main() {
    int jugador, computadora;

    //Inicializa el generador de numeros aleatorios
    srand(time(0));

    cout << "===== PIEDRA, PAPEL O TIJERAS =====" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijeras" << endl;
    cout << "Elige una opcion: ";
    cin >> jugador;

    if (jugador < 1 || jugador > 3) {
        cout << "Opcion invalida." << endl;
        return 1;
    }

    //Genera la eleccion de la computadora
    computadora = rand() % 3 + 1;

    determinarGanador(jugador, computadora);

    return 0;
}