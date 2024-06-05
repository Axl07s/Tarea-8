// Diseñe el programa que genera un número aleatorio
// El usuario debe adivinar el número en 3 oportunidades
// Use números aleatores y bucles (while o do..while)}
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // ejercicio #4 realizado en clases

    srand(time(NULL));

    int num = 1 + rand() % 50; //genera números aleatorios entre 1 al 50
    int aleatorio = rand() % 50 + 1; // Variable para almacenar el número aleatorio generado
    // Bucle para dar 3 oportunidades al usuario
    for (int intento = 1; intento <= 3; intento++) {
        cout << "PULSE ENTER para tirar los dados";
        cin.ignore(); // Espera a que el usuario pulse ENTER
       
        int num_usuario;
        cout << endl << "Ingrese tu número: ";
        cin >> num_usuario;

        if(num_usuario < aleatorio) {
            cout << endl << "Ingresaste el " << num_usuario << ", Debes ingresar uno mayor" << endl;
        } else if (num_usuario > aleatorio) {
            cout << endl << "Ingresaste el " << num_usuario << ", Debes ingresar uno menor" << endl;
        } else {
            cout << "¡Acertaste! GANASTE UNA BECA EN LA PUCE ESMERALDAS DEL 100%" << endl;
            break; // Abandonar el bucle si el usuario gana
        }
    }
    
    cout << endl << "El numero aleatorio es: " << aleatorio << endl; // Muestra el número aleatorio generado

    return 0;
}
