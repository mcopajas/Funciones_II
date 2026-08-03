#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

//Funcion que calcula el area de un circulo
double calcularArea(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    cout << "El area del circulo es: " << calcularArea(radio) << endl;

    return 0;
}