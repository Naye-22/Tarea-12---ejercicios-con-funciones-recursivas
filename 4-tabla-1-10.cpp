/* 
Nombre:Nayeli Cruz
Fecha:19/6/2024
Orden:4) Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente 
desde el 10 al 1
*/
#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar de manera descendente
void imprimirTablaDescendente(int tabla, int multiplicador) {
    // Caso base: si el multiplicador es 1, imprime la última multiplicación y retorna
    if (multiplicador == 1) {
        cout << tabla << " x " << multiplicador << " = " << tabla * multiplicador << endl;
        return;
    }

    // Imprimir la multiplicación actual
    cout << tabla << " x " << multiplicador << " = " << tabla * multiplicador << endl;

    // Llamar a la función recursivamente con el multiplicador decrementado
    imprimirTablaDescendente(tabla, multiplicador - 1);
}

int main() {
    int tabla;
    cout << "Ingrese el número de la tabla de multiplicar: ";
    cin >> tabla;

    // Llamar a la función recursiva para imprimir la tabla de manera descendente
    imprimirTablaDescendente(tabla, 10);

    return 0;
}
