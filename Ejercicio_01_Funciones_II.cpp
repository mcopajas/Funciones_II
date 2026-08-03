#include <iostream>
using namespace std;

//Variable global para el saldo
int saldo = 0;

//Funcion para depositar dinero
void depositar() {
    saldo += 100;
    cout << "\nSe han depositado 100 unidades." << endl;
    cout << "Nuevo saldo: " << saldo << endl;
}

//Funcion para retirar dinero
void retirar() {
    if (saldo >= 100) {
        saldo -= 100;
        cout << "\nSe han retirado 100 unidades." << endl;
        cout << "Nuevo saldo: " << saldo << endl;
    } else {
        cout << "\nSaldo insuficiente." << endl;
    }
}

//Funcion para mostrar el saldo
void mostrarSaldo() {
    cout << "\nSaldo actual: " << saldo << endl;
}

//Funcion del menu
void menu() {
    int opcion;

    do {
        cout << "\n===== CAJERO AUTOMATICO =====" << endl;
        cout << "1. Depositar 100" << endl;
        cout << "2. Retirar 100" << endl;
        cout << "3. Mostrar saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                depositar();
                break;

            case 2:
                retirar();
                break;

            case 3:
                mostrarSaldo();
                break;

            case 4:
                cout << "\nSaliendo del programa..." << endl;
                break;

            default:
                cout << "\nOpcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 4);
}

int main() {
    menu();
    return 0;
}