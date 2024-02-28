#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // Calculate sum
    double suma = a + b;
    cout << "La suma de " << a << " y " << b << " es: " << suma << endl;

    // Calculate difference
    double diferencia = a - b;
    cout << "La diferencia de " << a << " y " << b << " es: " << diferencia << endl;

    // Calculate product
    double producto = a * b;
    cout << "El producto de " << a << " y " << b << " es: " << producto << endl;

    // Calculate quotient
    if (b != 0) {
        double cociente = a / b;
        cout << "El cociente de " << a << " y " << b << " es: " << cociente << endl;
    }
    else {
        cout << "No se puede dividir por cero." << endl;
    }

    return 0;
}