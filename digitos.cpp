//FALTA ENUNCIADO
#include <iostream>
using namespace std;

int main() {
    
    // Ejercicio 8

    int num, n, cont;
    cout << "Ingrese un entero: ";
    cin >> num;

    cont = 0;
    n = 1;

    while (n <= num)
    {
        n *= 10;
        cont++;
    }

    cout << endl << cont;
    return 0;
}
