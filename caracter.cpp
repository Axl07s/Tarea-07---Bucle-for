#include <iostream>
using namespace std;

int main() {

    // Mensaje antes de inicializar el programa
    cout << "3) Este programa pide por teclado carácter (puede ser una letra o un símbolo). También pide la cantidad de veces que ese carácter debe repetirse." << endl;

    char caracter;
    int cantidad;

    cout << "Ingrese un carácter: ";
    cin >> caracter;
    cout << "Ingrese la cantidad de veces que debe repetirse: ";
    cin >> cantidad;

    // Iterar desde 1 hasta la cantidad solicitada por el usuario
    for (int i = 1; i <= cantidad; i++) {
        cout << caracter << " ";
    }
    cout << endl;
    return 0;
}
