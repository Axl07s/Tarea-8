// Diseñe el programa que solicite una tabla de multiplicar 
// y a continuación imprima los resultados desde el 12 al 1
// use bucle do...while
#include<iostream>
using namespace std;

int main()
{
    // Comentario

    /*
    ejercicio #5: Lee un número por teclado que representa una tabla de multiplicar. Imprima los resultados de la tabla de multiplicar desde el 1 al 12.
    */

    int tabla;
    cout << "Ingrese el número para la tabla de multiplicar: ";
    cin >> tabla;
    int k = 12;
    do
    {
        cout <<tabla<< " x " << k << " = " <<tabla * k << endl;
        k--;
    }while (k >= 1);

    return 0;
}