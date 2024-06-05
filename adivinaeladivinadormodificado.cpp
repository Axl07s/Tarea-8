// Diseñe el programa que genera un número aleatorio
// El usuario debe adivinar el número en 3 oportunidades
// Use números aleatores y bucles (while o do..while)}
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

     // Comentario

    /*
    ejercicio #6: Modifica el ejercicio #4 (adivina el número) para que la terminación del mismo NO sea la sentencia break, sino una variable booleana.
    */

    srand(time(0)); // semilla para generar números aleatorios
    int aleatorio = rand() % 100 + 1; // número aleatorio entre 1 y 100
    int num, oportunidades = 0;
    const int max_oportunidades = 3;
    bool adivinaste = false;

    cout << "Adivina el número (entre 1 y 100): ";
    do {
        cin >> num;
        ++oportunidades;
        if (num < aleatorio) {
            cout << "El número es mayor. Intenta nuevamente: ";
        } else if (num > aleatorio) {
            cout << "El número es menor. Intenta nuevamente: ";
        } else {
            adivinaste = true;
            cout << "¡Felicidades! TE HAS GANADO UNA BECA EN LA PUCE ESMERALDAS" << endl;
        }
    } while (oportunidades <= max_oportunidades && !adivinaste);

    if (!adivinaste) {
        cout << "Lo siento, no has adivinado el número. El número era: " << aleatorio << endl;
    }

    return 0;
}
