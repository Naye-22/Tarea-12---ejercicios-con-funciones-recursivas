/* 
Nombre:Nayeli Cruz
Fecha:19/6/2024
Orden:3)  Diseñe la función recursiva que cuenta el total de cifras que tiene un número entero.
*/
#include <iostream>
using namespace std;

int contarCifras(int numero) {
    // Caso base: si el número es menor que 10, tiene una sola cifra
    if (numero < 10) {
        return 1;
    }
    
    // Caso recursivo: contar una cifra y llamar recursivamente con el número dividido por 10
    return 1 + contarCifras(numero / 10);
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int totalCifras = contarCifras(numero);
    cout << "El número " << numero << " tiene " << totalCifras << " cifras." << endl;

    return 0;
}
