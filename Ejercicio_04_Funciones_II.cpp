#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Inicializa el generador de numeros aleatorios
    srand(time(0));

    //Genera un numero aleatorio entre 1 y 100
    int numeroMagico = rand() % 100 + 1;
    int intento;

    cout << "===== JUEGO DEL NUMERO MAGICO =====" << endl;
    cout << "Adivina el numero (entre 1 y 100): ";

    while (true) {
        cin >> intento;

        if (intento > numeroMagico) {
            cout << "Muy alto. Intenta de nuevo: ";
        }
        else if (intento < numeroMagico) {
            cout << "Muy bajo. Intenta de nuevo: ";
        }
        else {
            cout << "Correcto! El numero magico era " << numeroMagico << "." << endl;
            break;
        }
    }

    return 0;
}