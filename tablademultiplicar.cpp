#include <iostream>
using namespace std;

int main() {

    // ejercicio #3 realizado en clases

    int tabla;
    do {
        cout << "Ingrese un número para mostrar su tabla de multiplicar (0 para salir): ";
        cin >> tabla;
        if (tabla == 0) break;
        for (int i = 1; i <= 12; ++i) {
            cout << tabla << " x " << i << " = " << tabla * i << endl;
        }
        cout << endl;
    } while (tabla != 0);
    return 0;
}
