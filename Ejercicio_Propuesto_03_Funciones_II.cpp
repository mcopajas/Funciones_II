#include <iostream>
#include <cmath>
using namespace std;

//Funcion que calcula la hipotenusa
double calcularHipotenusa(double cateto1, double cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

int main() {
    double cateto1, cateto2;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    cout << "La hipotenusa es: "
         << calcularHipotenusa(cateto1, cateto2) << endl;

    return 0;
}