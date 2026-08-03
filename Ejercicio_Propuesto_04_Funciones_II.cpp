#include <iostream>
#include <cmath>
using namespace std;

//Funcion que calcula las raices
void calcularRaices(double a, double b, double c) {
    double discriminante, x1, x2;

    discriminante = pow(b, 2) - (4 * a * c);

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "Las raices son: " << x1 << " y " << x2 << endl;
    }
    else if (discriminante == 0) {
        x1 = -b / (2 * a);

        cout << "La ecuacion tiene una raiz doble: " << x1 << endl;
    }
    else {
        cout << "La ecuacion no tiene raices reales." << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;

    cout << "Ingrese el coeficiente b: ";
    cin >> b;

    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser cero." << endl;
        return 1;
    }

    calcularRaices(a, b, c);

    return 0;
}