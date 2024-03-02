#include <iostream>

using namespace std;

int main() {
    cout << "Este programa suma los numeros pares e impares y los divide en dos variables" << endl;

    char a = 0;
    char b = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << "Los numeros pares son: " << i << endl;
            a += i;
        } else if( i% 2 == 1) {
            cout << "Los numeros impares son: " << i << endl;
            b += i;

        }
    }
    return 0;
}

