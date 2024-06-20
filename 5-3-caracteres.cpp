/* 
Nombre:Nayeli Cruz
Fecha:19/6/2024
Orden: 5) Diseñe el programa que permita generar 3 cartas aleatorias, con las siguientes consideraciones:
- Se puede comenzar a jugar, si luego de generar las 3 cartas, las 3 son diferentes, es decir, si salen, por ejemplo dos cartas K de brillo, no se puede continuar. 
- El jugador gana si la sumatoria de sus cartas es 21. La carta A se la considera como 1, las cartas J, Q, K se las considera como 10.
- Si al generar las 3 primeras cartas el jugador no ha ganado, tiene la posibilidad de cambiar hasta 2 cartas.
   Se debe preguntar al usuario: Cuántas cartas desea cambiar 1 o 2 ?
    Luego de este cambio se vuelven a sumar y si suman 21 , ya hay ganador. También gana cuando salen 3 cartas iguales. Por ejemplo  A de brillo, A de trébol, A de corazón.
- Después de cada partida, debe preguntar al usuario: Desea seguir Jugando (S/N) ?
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Carta {
    int valor;
    string simbolo;
};

void ImprCartas(int cartas, string simbolo){
    if(cartas==1 && simbolo=="brillo"){
        cout<<"╔═════════════╗"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║      A♦     ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"╚═════════════╝"<<endl;

    }
    else if (cartas == 111 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "brillo") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "brillo") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "brillo") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    // Agrega condiciones para las cartas de "picas"
    else if (cartas == 3 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "picas") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "picas") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "picas") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
        else if (cartas == 10 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "corazones") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "corazones") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "corazones") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "trebol") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "trebol") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "trebol") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }

}

int GenerarNum() {
    return 1 + rand() % 13;
}

string GenerarPalo() {
    int cart = 1 + rand() % 4;
    if (cart == 1) {
        return "brillo";
    } else if (cart == 2) {
        return "corazones";
    } else if (cart == 3) {
        return "trebol";
    } else {
        return "picas";
    }
}

void GenerarCarta(int& numero, string& palo) {
    numero = GenerarNum();
    palo = GenerarPalo();
}

void ImprimirCarta(int numero, const string& palo) {
    cout << numero << " de " << palo << endl;
}

bool CartasDiferentes(int num1, const string& palo1, int num2, const string& palo2, int num3, const string& palo3) {
    if ((num1 == num2 && palo1 == palo2) || (num1 == num3 && palo1 == palo3) || (num2 == num3 && palo2 == palo3)) {
        return false;
    }
    return true;
}

int ValorCarta(int numero) {
    if (numero >= 2 && numero <= 10) {
        return numero;
    } else if (numero == 1) {
        return 1; // A
    } else {
        return 10; // J, Q, K
    }
}

int SumarCartas(int num1, int num2, int num3) {
    return ValorCarta(num1) + ValorCarta(num2) + ValorCarta(num3);
}

bool TresIguales(int num1, int num2, int num3) {
    return num1 == num2 && num2 == num3;
}

void Juego() {
    int num1, num2, num3;
    string palo1, palo2, palo3;
    
    do {
        GenerarCarta(num1, palo1);
        GenerarCarta(num2, palo2);
        GenerarCarta(num3, palo3);
    } while (!CartasDiferentes(num1, palo1, num2, palo2, num3, palo3));
    
    cout << "Tus cartas son:" << endl;
    ImprCartas(num1, palo1);
    ImprCartas(num2, palo2);
    ImprCartas(num3, palo3);
    
    if (SumarCartas(num1, num2, num3) == 21 || TresIguales(num1, num2, num3)) {
        cout << "¡Ganaste!" << endl;
    } else {
        int cambios;
        cout << "¿Cuántas cartas desea cambiar? (1 o 2): ";
        cin >> cambios;
        
        if (cambios == 1 || cambios == 2) {
            for (int i = 0; i < cambios; ++i) {
                int indice;
                cout << "Ingrese el índice de la carta que desea cambiar (1, 2, 3): ";
                cin >> indice;
                if (indice == 1) {
                    GenerarCarta(num1, palo1);
                } else if (indice == 2) {
                    GenerarCarta(num2, palo2);
                } else if (indice == 3) {
                    GenerarCarta(num3, palo3);
                } else {
                    cout << "Índice inválido." << endl;
                    --i; // Intentar de nuevo
                }
            }
            
            cout << "Tus nuevas cartas son:" << endl;
            ImprCartas(num1, palo1);
            ImprCartas(num2, palo2);
            ImprCartas(num3, palo3);
            
            if (SumarCartas(num1, num2, num3) == 21 || TresIguales(num1, num2, num3)) {
                cout << "¡Ganaste!" << endl;
            } else {
                cout << "No ganaste esta vez." << endl;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    char seguirJugando = 'S';
    
    while (seguirJugando == 'S' || seguirJugando == 's') {
        Juego();
        cout << "¿Desea seguir jugando? (S/N): ";
        cin >> seguirJugando;
    }
    
    return 0;
}