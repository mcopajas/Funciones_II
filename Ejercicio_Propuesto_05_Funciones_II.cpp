#include <iostream>
#include <cmath>
using namespace std;

//Funcion que calcula las raices por referencia
void calcularRaices(double a, double b, double c, double &x1, double &x2) {
    double discriminante;

    discriminante = pow(b, 2) - (4 * a * c);

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
    }
    else if (discriminante == 0) {
        x1 = x2 = -b / (2 * a);
    }
    else {
        cout << "La ecuacion no tiene raices reales." << endl;
    }
}

int main() {
    double a, b, c;
    double x1, x2;

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

    double discriminante = pow(b, 2) - (4 * a * c);

    if (discriminante >= 0) {
        calcularRaices(a, b, c, x1, x2);

        cout << "\nLas raices son:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        calcularRaices(a, b, c, x1, x2);
    }

    return 0;
}