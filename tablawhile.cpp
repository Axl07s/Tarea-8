// Diseñe el programa que solicite una tabla de multiplicar
// y a continuación imprimia us resultados desde el 12 al 1
//use bucle while
#include<iostream>
using namespace std;

int main()
{
    // Comentario
    /*
    ejercicio #2 realizado en clases:
    */

    int k = 12;
    int n;
    cout << "Ingrese el número para la tabla de multiplicar: ";
    cin >> n;
    while (k >= 1)
    {
        cout << n << " x " << k << " = " << n * k << endl;
        k--;
    }

    return 0;
}
