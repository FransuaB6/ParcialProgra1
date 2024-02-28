#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;

    cout << "Digite el numero a analizar: \n";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "El numero es Primo";
    }
    else {
        cout << "El numero no es Primo";
    }

    return 0;
}