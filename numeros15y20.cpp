#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    // Ejercicio 7: Imprime 100 números aleatorios comprendidos entre 15 y 120 usando un bucle while
    

    srand(time(0)); // semilla para generar números aleatorios
    int contador = 0;

    while (contador < 100) {
        int num = rand() % 106 + 15; // números aleatorios entre 15 y 120
        cout << num << " ";
        ++contador;
    }
    cout << endl;

    return 0;
}
