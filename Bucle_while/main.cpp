#include <iostream>

using namespace std;

int main() {
    cout << "Programa de bucle while que incrementa y se detiene al llegar a un número impar después de 30" << endl;

    int numero = 1;

    while (numero <= 30) {
        if (numero % 2 == 0) {
            cout << "Los números son: " << numero << endl;
        }
        numero++;
    }

    return 0;
}
