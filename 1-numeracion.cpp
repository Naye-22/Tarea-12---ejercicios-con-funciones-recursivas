/* 
Nombre: Nayeli Cruz
Fecha: 19/6/2024
Orden:1) Diseñe la función recursiva que realice la sumatoria de : 1 -2 + 3 - 4 + 5  - 6 + 7 .... n. 
Donde es el límite de la serie
*/
#include <iostream>
using namespace std;

int sumatoria(int n) {
    // Caso base
    if (n == 1) {
        return 1;
    }

    // Caso recursivo
    if (n % 2 == 0) {
        return sumatoria(n - 1) - n;
    } else {
        return sumatoria(n - 1) + n;
    }
}

int main() {
    int n;
    cout << "Ingrese el límite de la serie (n): ";
    cin >> n;
    
    int resultado = sumatoria(n);
    cout << "La sumatoria de la serie hasta " << n << " es: " << resultado << endl;

    return 0;
}