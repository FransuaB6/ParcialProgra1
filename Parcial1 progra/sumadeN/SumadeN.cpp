#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite un numero entero positivo: \n";
    cin >> n;

    if (n < 1) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de todos los numeros enteros desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}