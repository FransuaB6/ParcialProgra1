#include <iostream>
#include <cmath> // incluye la liberia cmath

using namespace std;

int main() {
    double numero;

    cout << "Digite el numero del cual quiere calcular la raiz cuadrada: \n";
    cin >> numero;



    double resultado = sqrt(numero);

    cout << "La raiz cuadrada de " << numero << " es: " << resultado << endl;

    return 0;
}