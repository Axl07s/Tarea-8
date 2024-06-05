// Diseñe el programa que imprimalos multiplos de 4

// use bucle while

#include <iostream>
using namespace std;

int main() {

    // Ejercicio 1
    
    for (int k = 1; k <= 50; ++k) {
        if (k % 4 == 0) {
            cout << k << " ";
        }
    }
    return 0;
}